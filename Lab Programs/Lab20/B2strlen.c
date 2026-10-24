#include <stdio.h>

int main(){

    int len=0;
    char s1[100];

    printf("Enter input in the string: ");
    gets(s1);

    for(int i = 0 ; s1[i] != '\0' ; i++){
        len++;
    }
puts(s1);
    printf("The length of the given string is: %d", len);
    return 0;
}