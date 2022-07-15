#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Check The Argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    //Definition of Key
    string key = argv[1];
    //Check the input
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //Ask the user
    string plaintext = get_string("plaintext: ");

    //Convertion key to interger
    int k = atoi(key);
    printf("Ciphertext: ");
    //Receive Cyphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 65) + k) % 26) + 65);
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (((plaintext[i] - 97) + k) % 26) + 97);
        }
        else

        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}