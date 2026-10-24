#include <stdio.h>

int main(){
    char s1[500];
    printf("Enter string: ");
    gets(s1);

    for(int i = 0 ; s1[i] != '\0' ; i++){
        if((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= '0' && s1[i] <= '9')){
            printf("%c", s1[i]);
        }
    }

    return 0;
}