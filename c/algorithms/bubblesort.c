#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void bubble_sort(int *array, int len) 
{
    for (int i = 0; i < len; i++) {
        #pragma omp parallel for
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main(void) 
{
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    
    bubble_sort(yarr, 10);

    printf("[");
    for (int i = 0; i < 10; i++) {
        printf("%d", yarr[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}