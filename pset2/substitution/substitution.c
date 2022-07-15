#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])

{
    //VALIDATE THE KEY
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    //LENGHT OF THE KEY
    int argv_length = strlen(argv[1]);
    if (argv_length != 26)
    {
        printf("Key must be up to 26\n");
        return 1;
    }

    //UNIQUE ALPHABETICAL KEY
    for (int i = 0; i < argv_length; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("All Key must be an Alphabeth\n");
            return 1;
        }
        for (int j = i + 1; j < argv_length; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Key must not contain repeated alphabeth");
                return 1;
            }
        }
    }

    //INPUT PLAINTEXT
    string plaintext = get_string("plaintext: ");

    //CIPHERTEXT
    printf("ciphertext: ");
    int plaintext_length = strlen(plaintext);

    //ENCIPHER
    for (int i = 0; i < plaintext_length; i++)
    {
        //UPPERCASE
        if (isupper(plaintext[i]))
        {
            printf("%c", toupper(argv[1][plaintext[i] - 65]));
        }

        //LOWERCASE
        else if (islower(plaintext[i]))
        {
            printf("%c", tolower(argv[1][plaintext[i] - 97]));
        }
        // SYMBOLS
        else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");
}