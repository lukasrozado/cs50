#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    int start_size;

    do

    {
        start_size = get_int("Start Size: ");

    }
    while (start_size < 9);

    int end_size;

    do
    {
        end_size = get_int("End Size: ");
    }
    while(end_size < start_size);

    int actual_population = start_size;
    int years_passed = 0;
    int population_growth = 3;
    int population_dead = 4;

    while (actual_population < end_size)

    {
        actual_population = round(actual_population + actual_population / population_growth - actual_population / population_dead);
        years_passed++;
    }

    printf("Years: %i\n", years_passed);

}

