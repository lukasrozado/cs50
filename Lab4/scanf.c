#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (void)
{
  //  int x;
  //  printf("x: ");
  //  scanf("%i", &x); //Get int
  //  printf("x: %i\n", x);

    char *s = malloc(4); // MAKE ERROR IN NULL BECAUSE STRINGS ARE LIMITED IN MEMORY. GET STRING FIXES THIS
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}