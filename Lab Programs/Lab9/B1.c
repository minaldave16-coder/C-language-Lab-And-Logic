#include <stdio.h>

int main(){

    char ch1 = 'A';
    char ch2 = 'a';
    printf("All the uppercase alphabets:\n");
    while(ch1 <= 'Z'){
        printf("%c  ",ch1);
        ch1++;
    }

    printf("\nAll the lowercase alphabets:\n");

    while(ch2 <= 'z'){
        printf("%c  ",ch2);
        ch2++;
    }
    return 0;
}