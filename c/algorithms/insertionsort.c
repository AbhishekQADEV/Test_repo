#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    int unsorted[] = {5, 6, 4, 3, 9};
    int sorted[5];
    int size = sizeof(unsorted) / sizeof(unsorted[0]);

    #pragma omp parallel for
    for (int i = 0; i < size; i++)
    {
        int a = unsorted[i];
        int b = unsorted[i + 1];

        if (a > b)
        {
            sorted[i] = b;
            sorted[i + 1] = a;
        }
        else
        {
            sorted[i] = a;
            sorted[i + 1] = b;
        }
    }

    return 0;
}