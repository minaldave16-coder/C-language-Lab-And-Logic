#include <stdio.h>

int main()
{

    float R, G, B;
    float White, Cyan, Magenta, Yellow, Black;

    printf("Enter values of R , G , B from 0 - 255\n");

    printf("Enter R: ");
    scanf("%f", &R);

    printf("Enter G: ");
    scanf("%f", &G);

    printf("Enter B: ");
    scanf("%f", &B);

    if (R > 255 || G > 255 || B > 255)
    {
        printf("Invalid input ... enter from 0 to 255 only\n");
    }
    else
    {

        White = (R / 255.0 > G / 255.0) ? ((R / 255.0 > B / 255.0) ? (R / 255.0) : (B / 255.0)) : ((G / 255.0 > B / 255.0) ? (G / 255.0) : (B / 255.0));
        printf("The value of white is : %f\n", White);

        if (White == 0)
        {
            printf("The values of Cyan , Magenta , Yellow is 0 and the value of Black is 1\n");
        }
        else
        {
            Cyan = (White - R / 255) / White;
            printf("The value of cyan is %f\n", Cyan);

            Magenta = (White - G / 255) / White;
            printf("The value of magenta is: %f\n", Magenta);

            Yellow = (White - B / 255) / White;
            printf("The value of Yellow is: %f\n", Yellow);

            Black = 1 - White;
            printf("The value of black is : %f\n", Black);
        }
    }

    return 0;
}