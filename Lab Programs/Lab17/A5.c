#include <stdio.h>

int main()
{
    int n, *p;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    p = a;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%d", p + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}