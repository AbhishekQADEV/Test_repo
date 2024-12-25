#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    long a = 0;
    long b = 1;
    
    #pragma omp parallel
    {
        while (b > a)
        {
            #pragma omp critical
            {
                a++;
                printf("%ld \n %ld\n", a, b);
            }
            #pragma omp barrier
            #pragma omp single
            {
                b++;
            }
        }
    }
    
    if (b == sizeof(long))
    {
        exit(1);
    }
    
    return 0;
}