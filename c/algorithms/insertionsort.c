#include <stdio.h>

int main()
{
    int unsorted[] = {5, 6, 4, 3, 9};
    int sorted[5];
    int i, j, temp;
    
    for(i = 1; i < 5; i++)
    {
        j = i;
        
        while(j > 0 && unsorted[j] < unsorted[j-1])
        {
            temp = unsorted[j];
            unsorted[j] = unsorted[j-1];
            unsorted[j-1] = temp;
            j--;
        }
    }
    
    for(i = 0; i < 5; i++)
    {
        sorted[i] = unsorted[i];
    }
    
    return 0;
}