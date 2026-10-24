#include <stdio.h>
#include <string.h>

int main()
{
    char name[5000], s1[5000];
    printf("Enter your full name: ");
    gets(name);

    //     int length = strlen(name);

    // printf("%d", length);

    // strcpy(s1, name);
    // puts(s1);

    // printf("Enter another string: ");
    // gets(s1);

    // strcat(name , s1);
    // puts(name);

    // strrev(name);
    // puts(name);

    // strlwr(name);
    // puts(name);

    strupr(name);
    puts(name);

    return 0;
}