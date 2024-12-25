#include <stdio.h>

void bubble_sort(int *array, int len) 
{
    for (int i = 0; i < len; i++) {
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
    
    bubble_sort(yarr, sizeof(yarr)/sizeof(yarr[0]));

    printf("[");
    for (int i = 0; i < sizeof(yarr)/sizeof(yarr[0]); i++) {
        printf("%d", yarr[i]);
        if (i < sizeof(yarr)/sizeof(yarr[0]) - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}