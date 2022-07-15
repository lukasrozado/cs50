#include <cs50.h>
#include <stdio.h>

int main (void)

 {

    int points = get_int("How many points did you lose?\n\n");
    const int MINE = 2; //CONSTANT

    if  (points < MINE)
    {
        printf("\nYou lost fewer points than me\n\n");
    }
    else if (points > MINE)
    {
        printf("\nYou lost more points than me\n\n");
    }
    else
    {
        printf("\nYou lost the same number as me\n\n");
    }


}