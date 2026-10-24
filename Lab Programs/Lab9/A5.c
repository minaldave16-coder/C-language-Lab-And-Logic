#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Enter n: ");
    scanf("%d", &n);

while(i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
        i++;

    }

    return 0;
}