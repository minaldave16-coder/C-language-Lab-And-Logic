#include <stdio.h>

int main(){

    char alphabet , result;

    printf("Enter alphabet: ");
    scanf(" %c", &alphabet);

    result = (alphabet >= 'A' && alphabet <= 'Z' || alphabet >= 'a' && alphabet <= 'z') ? (printf("It is an alphabet")) : (printf("It is not an alphabet "));
 
    return 0;
}