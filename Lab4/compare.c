#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    //int i = get_int("i: ");
    //int j = get_int("j: ");
    string t = get_string("t: "); // Different Adress because it was designed that way
    string s = get_string("s: "); // It's not the same visually is the same but in the memory it'snt.
    //string brings the first char of a text.

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

}