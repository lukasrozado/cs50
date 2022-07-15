#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size;

    do
    {
        size = get_int("Size: ");

    }

    while (size < 1 || size > 8);



    for (int hash_row = 0; hash_row < size; hash_row++)
    {
        for (int space = 0; space < size - hash_row - 1; space++)
        {
            printf(" ");
        }

        for (int hash_column = 0; hash_column <= hash_row; hash_column++)
        {
            printf("#");
        }
        printf("  ");
        for (int hash_column = 0; hash_column <= hash_row; hash_column++)
        {
            printf("#");
        }
        printf("\n");

    }
}
