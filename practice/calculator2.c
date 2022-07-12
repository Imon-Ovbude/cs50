#include <stdio.h>
#include <cs50.h>

int main(void) {
    // prompt user for x
    // float x = get_float("x: ");
    int x = get_int("x: ");

    // prompt user for y
    // float y = get_float("y: ");
    int y = get_int("y: ");

    // divide x by y
    float z = (float) x / (float) y;

    // perform addition
    printf("%.2f\n", z);
}