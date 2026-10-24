
#include <stdio.h>

void swap(int a[], int b[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size!\n");
        return 0;
    }

    int a[n], b[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    swap(a, b, n);

    printf("First array after swapping:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSecond array after swapping:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}