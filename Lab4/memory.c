#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
    int *x = malloc(3 * sizeof(int));
    x [0] = 31;             //Use valgrind to identify errors in memory.
    x [1] = 73;
    x [2] = 33;
    free(x);               // THE MEMORY NEEDS TO BE FREE
    // x [3] = 33; //Touching the memory that should have because i didn't expecified before in the variable

}