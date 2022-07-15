#include <cs50.h>
#include <stdio.h>

int main (void)

{
    printf("\nDivision\n \n");
    float first_number = get_float("x: "); //long > int because goes for 64bits
    float second_number = get_float("y: ");
    float result_number = (float) first_number / (float)second_number;
    printf("\nResultado: %.2f\n", result_number); //%li it's better thant %i because goes for 64bits
    printf("\n");
}