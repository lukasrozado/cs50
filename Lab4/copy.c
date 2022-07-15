#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char *s = get_string("s: ");

    // string t = s; // SAME VALUE IN ADRESS BOTHS CHANGE BECAUSE IT's THE SAME POINTERS.

    char *t = malloc(strlen(s) + 1); // GIVE +1 TO STORE MEMORY IN MALLOC

    if (t == NULL) // IF DOESNT HAVE ENOUGHT MEMORY GIVE A ERROR.
    {
        return 1;
    }

    strcpy(t, s);

    /* for (int i = 0, n = < strlen(s) + 1; i < n ; i++) // COPY THE STRING
    {
        t[i] = s[i];
    } */

    if (strlen(t) > 0)
    {
         t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free (t);
}