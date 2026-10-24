#include <stdio.h>
int max(int a1, int a2);

int main()
{

    int a = 9, b = 8;

    int result = max(a, b);

    printf("%d", result);

    return 0;
}

int max(int a1, int a2)
{

    return ((a2 > a1) ? (a2) : (a1));
}