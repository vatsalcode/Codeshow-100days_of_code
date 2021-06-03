#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("You have entered: ");
    if (num < 20)
    {
        switch (num)
        {
        case 10:
            printf("ten");
            return 0;
        case 11:
            printf("eleven");
            return 0;
        case 12:
            printf("twelve");
            return 0;
        case 13:
            printf("thirteen");
            return 0;
        case 14:
            printf("fourteen");
            return 0;
        case 15:
            printf("fifteen");
            return 0;
        case 16:
            printf("sixteen");
            return 0;
        case 17:
            printf("seventeen");
            return 0;
        case 18:
            printf("eigthteen");
            return 0;
        case 19:
            printf("nineteen");
            return 0;
        }
    }
    else
    {
        switch (num / 10)
        {

        case 2:
            printf("twenty");
            break;

        case 3:
            printf("thirty");
            break;

        case 4:
            printf("forty");
            break;

        case 5:
            printf("fifty");
            break;

        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("seventy");
            break;

        case 8:
            printf("eighty");
            break;

        case 9:
            printf("ninety");
            break;
        }
        switch (num % 10)
        {

        case 1:
            printf("-one");
            break;
        case 2:
        printf("-two");
            break;

        case 3:
            printf("-three");
            break;

        case 4:
            printf("-four");
            break;

        case 5:
            printf("-five");
            break;

        case 6:
            printf("-Six");
            break;
        case 7:
            printf("-seven");
            break;

        case 8:
            printf("-eight");
            break;

        case 9:
            printf("-nine");
            break;
        }
    }

    return 0;
}
