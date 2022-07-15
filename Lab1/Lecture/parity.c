#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("\nEVEN OR ODD\n\n");
    
    int even_odd = get_int("Type a number: ");

    if (even_odd % 2 == 0) // Any number divided for 2 has a result of 0 or 1
    {
        printf("\nEven\n\n");
    }
    else
    {
        printf("\nOdd\n\n");
    }
}