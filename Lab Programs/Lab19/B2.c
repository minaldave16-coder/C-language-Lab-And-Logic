#include <stdio.h>
#include <string.h>

int main()
{

    char userid[500];
    printf("Enter your userId that you would like to use: ");
    gets(userid);

    strupr(userid);
    printf("%s", userid);

    return 0;
}