#include <stdio.h>

int main(){

    char s1[100] , s2[100];

    printf("Enter string-1: ");
    gets(s1);

    printf("Enter string-2: ");
    gets(s2);
    int flag = 0;

    int len1 = 0 , len2 = 0;
    for(int i = 0 ; s1[i] != '\0' ; i++){
        len1++;
    }

    for(int i = 0 ; s2[i] != '\0' ; i++){
        len2++;
    }

    if(len1 == len2){
        for(int i = 0 ; i <= len1 ; i++){
            if(s1[i] != s2[i]){
                flag = 1;
                printf("Not same");
                break;
            }
        }
        if(flag == 0){
            printf("Same");
        }
    }
    else{
        printf("Never same");
    }
    
    return 0;
}