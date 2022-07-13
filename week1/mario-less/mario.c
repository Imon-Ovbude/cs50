#include "cs50.h"
#include <stdio.h>


int main(void) 
{
    int height;

    do {
        height = get_int("Enter a number between 1 and 8\n ");
    } while (height < 1 || height > 8 );
    

    printf("Stored %i\n", height);
}