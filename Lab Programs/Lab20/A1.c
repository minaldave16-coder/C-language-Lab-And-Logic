#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50];
    int flag = 0, length;

    scanf("%s", s1);
    length = strlen(s1);

    for (int i = 0; i < length / 2; i++)
    {
        if (s1[i] != s1[length - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("It is not palindrome string");
    else
        printf("It is palindrome");

    return 0;
}