#include <cs50.h>
#include <stdio.h>

int main (void)

{
    printf("\nSum Calculator\n \n");
    long first_number = get_long("x: "); //long > int because goes for 64bits
    long second_number = get_long("y: ");
    long result_number = first_number + second_number;
    printf("\nResultado: %li\n", result_number); //%li it's better thant %i because goes for 64bits
    printf("\n");
}