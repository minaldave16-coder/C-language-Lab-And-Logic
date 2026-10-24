#include <stdio.h>
int main()
{
    char str1[100] , str2[100];
    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    int i = 0;
    // while (str1[i] != '\0')
    // {
    //     i++;
    // }
    // int j = 0;
    // while (str2[j] != '\0')
    // {
    //     str1[i] = str2[j];
    //     i++;
    //     j++;
    // }
    // str1[i] = '\0';
    // puts(str1);
    // puts(str2);

    for(i = 0 ; str1[i] != '\0'; i){
        i++;
    }
    for(int j = 0 ; str2[j] != '\0' ; j){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    puts(str1);

    return 0;
}