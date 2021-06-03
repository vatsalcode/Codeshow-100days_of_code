#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
char caps_check(char *);
 
int main()
{
    char string[20], letter;
 
    printf("Enter a string to find it's first capital letter: ");
    scanf("%s", string);
    letter = caps_check(string);
    if (letter == 0)
    {
        printf("No capital letter is present in %s.\n", string);
    }
    else
    {
        printf("The first capital letter in %s is %c.\n", string, letter);    }
        return 0;
    }
    char caps_check(char *string)
    {
        static int i = 0;
        if (i < strlen(string))
        {
            if (isupper(string[i]))
            {
                return string[i];
            }
            else
            {
                i = i + 1;
                return caps_check(string);
            }
        }
        else return 0;
    }
