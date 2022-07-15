#include <cs50.h>
#include <stdio.h>
#include <string.h>

//DATA STRUCTURE
typedef struct
{
    string name;
    string number;

}
person;

int main(void)

{
    //STORING THE RESULTS

    person people[2];

    people[0].name = "Lukas";
    people[0].number = "+5521965590211";

    people[1].name = "Oswaldo";
    people[1].number = "+5521980608022";

    //LOOP TO FOUND THE RESULT

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Lukas") == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }

    //ERROR AREA
    
    printf("Not Found\n");
    return 1;

}