#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    int unsorted[] = {5, 6, 4, 3, 9};
    int sorted[5];
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    #pragma omp parallel for
    for (int i = 0; i < n; i++)
    {
        sorted[i] = unsorted[i];
    }

    int swapped;
    do
    {
        swapped = 0;
        #pragma omp parallel for reduction(+:swapped)
        for (int i = 0; i < n - 1; i++)
        {
            if (sorted[i] > sorted[i + 1])
            {
                int temp = sorted[i];
                sorted[i] = sorted[i + 1];
                sorted[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sorted[i]);
    }
    printf("\n");

    return 0;
}