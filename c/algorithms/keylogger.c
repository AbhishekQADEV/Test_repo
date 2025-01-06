#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int keylog()
{
    FILE * fPtr;
    fPtr = fopen("keylogger.txt", "a+"); // Open file in append mode instead of write mode

    const char *a = malloc(sizeof(char)); // Allocate memory for a single character
    *a = getchar(); // Read a single character
    
    if(a != NULL)
        fprintf(fPtr, "%c", *a); // Print the character to the file
    
    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;
    
    if(hour == 24)
        fclose(fPtr);
    
    free(a); // Free the allocated memory
}

int main()
{
    keylog();
    return 0; // Add return statement to main function
}