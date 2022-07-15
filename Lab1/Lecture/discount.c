#include <stdio.h>
#include <cs50.h>

float discount(float price, int percentage); // Put the Variable Here to The Code Understand.
int main (void)

{
    float regular = get_float("Regular Price: "); // Ask the Price
    int percent_off = get_int("Percent OFF:"); // Ask The Percentage
    float sale = discount(regular, percent_off); // Than Give the Result
    printf("Sale Price: $%.2f\n", sale); // And then Print
}

float discount(float price, int percentage)  // Function of Discount
{
    return price * (100 - percentage) / 100;  // Return the Value reuse before and do the math

}