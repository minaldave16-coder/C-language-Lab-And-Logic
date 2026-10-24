
#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }

    return base * power(base, exp - 1);
}

int main()
{
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    if (exp < 0)
    {
        printf("Please enter a non-negative exponent.\n");
    }
    else
    {
        printf("Power = %d\n", power(base, exp));
    }

    return 0;
}