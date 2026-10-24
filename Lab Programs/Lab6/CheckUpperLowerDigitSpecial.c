#include <stdio.h>

int main(){

    char ch = '\0';
    printf("Enter ch: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("This is Upper case character");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("This is lower case character");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("This is a digit");
    }
    else{
        printf("This is a special character");
    }

    return 0;
    
}