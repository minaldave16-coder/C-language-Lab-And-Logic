#include <stdio.h>

int main()
{

    char month = '\0';

    printf("Enter a month(J , F , M , A , Y , U , L , G , S , O , N , D): ");
    scanf(" %c", &month);

    switch (month)
    {
    case 'J':
        printf("In January we have 31 days");
        break;

    case 'F':
        printf("In February we generally have 28 days but in leap year we have 29 days");
        break;

    case 'M':
        printf("In March we have 31 days");
        break;

    case 'A':
        printf("In April we have 30 days");
        break;

    case 'Y':
        printf("In May we have 31 days");
        break;

    case 'U':
        printf("In June we have 30 days");
        break;

    case 'L':
        printf("In July we have 31 days");
        break;

    case 'G':
        printf("In August we have 31 days");
        break;

    case 'S':
        printf("In September we have 30 days");
        break;

    case 'O':
        printf("In October we have 31 days");
        break;

    case 'N':
        printf("In November we have 30 days");
        break;

    case 'D':
        printf("In December we have 31 days");
        break;

    default:
        printf("Enter from (J , F , M , A , Y , U , L , G , S , O , N , D): ");
        scanf(" %c", &month);
    }

    return 0;
}