#include <stdio.h>
int fibbo(int n);

int main()
{

    int n1;
    printf("Enter n: ");
    scanf("%d", &n1);

    fibbo(n1);

    return 0;
}

int fibbo(int n)
{
    int a = 0, b = 1;
    printf("0 1 ");
    for (int i = 0; i < n - 2; i++)
    {
        int sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }

    return 0;
}