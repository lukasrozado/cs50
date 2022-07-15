#include <stdio.h>
#include <cs50.h>

int main (void)
{
    /*int n = 50;
    int *p = &n;
    printf("%p\n", p); //Pointers in the memory adress.
    printf("%i\n", *p); //Which is to send the information correct. */
    //char *s = "Hi!"; // String is a char with pointer in memory without cs50.h
    string s = "Hi!";
    char *p = &s[0]; // Same result of adress
    printf("%p\n", p);
    printf("%p\n", s);
}