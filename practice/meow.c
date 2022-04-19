#include "cs50.h"
#include <stdio.h>

void meow(int n);

int main(void) {
    int i = 0;

// while loop
    while (i < 3) {
        printf("meow\n");
        i++;
    }

// for loop
   meow(6);
    
}

void meow(int n) {
    for(int i = 0; i < n; i++) {
        printf("meow\n");
    }
   
}