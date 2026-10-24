#include <stdio.h>

int main()
{

    int n, *p, *q;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n], b[n];
    p = a;
    q = b;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array1: ");
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array2: ");
        scanf("%d", q + i);
    }
    for (int i = 0; i < n; i++)
    {
        *(p + i) = *(p + i) + *(q + i);
        *(q + i) = *(p + i) - *(q + i);
        *(p + i) = *(p + i) - *(q + i);
    }

    printf("Array1 after swapping: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("Array2 after swaping: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(q + i));
    }

    return 0;
}