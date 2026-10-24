#include <stdio.h>
int fact(int n);

int main()
{
    int n, r;
    int nCr, nPr;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n)
    {
        printf("Invalid input!\n");
    }
    else
    {
        nCr = fact(n) / (fact(r) * fact(n - r));
        nPr = fact(n) / fact(n - r);

        printf("nCr = %d\n", nCr);
        printf("nPr = %d\n", nPr);
    }

    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}