#include <stdio.h>

int main()
{

    char s1[100] = "Darshan";
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int i = n;
    while (s1[i] != '\0')
    {
        printf("%c", s1[i++]);
    }

    return 0;
}