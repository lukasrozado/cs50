#include <stdio.h>
#include <cs50.h>

void meow(int count);

int main (void)

{
    meow(3);
}

void meow(int count)
{
    for (int counter = 0; counter < count; counter++)
     {
         printf("Meow\n");
     }
}