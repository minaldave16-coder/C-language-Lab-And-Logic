#include <stdio.h>
#include <ctype.h>

int main(){
    char alphabets;

    printf("Enter alphabets from A to Z: ");
    scanf("%c", &alphabets);

    alphabets = toupper(alphabets);

    if(alphabets == 'A' || alphabets == 'E' || alphabets == 'I' || alphabets == 'O' || alphabets == 'U'){
        printf("This is a vowel");
    }
    else{
        printf("This is not a vowel.");
    }

    return 0;
}