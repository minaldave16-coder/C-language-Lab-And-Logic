#include <stdio.h>
void main()
{
    char str1[100] = "Darshan", str2[100] = " University";

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
    puts(str2);

}