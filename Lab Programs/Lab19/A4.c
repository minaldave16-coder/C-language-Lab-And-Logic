
#include <stdio.h>
#include <string.h>

int main()
{
    char name[5000];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    char find;

    printf("Enter character to find: ");
    scanf(" %c", &find);

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == find)
        {
            printf("Character found at position %d\n", i + 1);
        }
    }

    return 0;
}