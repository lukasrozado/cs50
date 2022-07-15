#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);
int main (void)
{

    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap (&x, &y); // POINT THE VALUE WITH & TO IDENTIFIE THE ADRESS
    printf("Swaped  \nx is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a; //Specifie as pointers to refer the exacly value because if i dont will not change properly because isnt the same variable in the memory.
    *a = *b;
    *b = tmp;
}