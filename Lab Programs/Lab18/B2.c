
#include <stdio.h>
#include <math.h>

int PrimeChecker(int);
int PerfectChecker(int);
int DigitChecker(int);
int ArmstrongChecker(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (PrimeChecker(n))
        printf("This number is a Prime number\n");
    else
        printf("This number is not a Prime number\n");

    if (PerfectChecker(n))
        printf("This number is a Perfect number\n");
    else
        printf("This number is not a Perfect number\n");

    if (ArmstrongChecker(n))
        printf("This number is an Armstrong number\n");
    else
        printf("This number is not an Armstrong number\n");

    return 0;
}

int PrimeChecker(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int PerfectChecker(int n)
{
    int i, sum = 0;

    if (n <= 1)
        return 0;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
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

int ArmstrongChecker(int n)
{
    int rem = 0;
    int temp = n;
    int count;
    float sum_cube = 0;

    if (n < 0)
        return 0;

    count = DigitChecker(n);

    while (n > 0)
    {
        rem = n % 10;
        sum_cube += pow(rem, count);
        n = n / 10;
    }

    if (sum_cube == temp)
        return 1;
    else
        return 0;
}