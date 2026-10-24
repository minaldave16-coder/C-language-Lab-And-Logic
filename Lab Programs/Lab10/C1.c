#include <stdio.h>
#include <math.h>
int DigitChecker(int);

int main()
{

    int n;
    int rem = 0;
    float sum_cube = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    int temp = n;
    int count = DigitChecker(n);

    while (n > 0)
    {
        rem = n % 10;
        sum_cube += pow(rem, count);

        n = n / 10;
    }
    if (sum_cube == temp)
    {
        printf("This number is an Armstrong number");
    }
    else
    {
        printf("This number is not an Armstrong number");
    }
    return 0;
}

int DigitChecker(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count = count + 1;
    }
    return count;
}