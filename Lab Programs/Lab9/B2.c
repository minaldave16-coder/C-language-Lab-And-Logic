#include <stdio.h>

int main(){

    int n , i = 0;

    int values[] = {1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};
    char symbols[][6] = {"M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I"};

    printf("Enter n: ");
    scanf("%d", &n);

    while(n > 0){
        while(n >= values[i]){
            printf("%s",symbols[i]);

            n = n - values[i];
        }
        i++;
    }

    return 0;
}