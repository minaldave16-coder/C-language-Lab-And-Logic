#include <stdio.h>

int main(){

    int n1 , n2 , n3 , n4 , n5 , n6 , n7 , n8 , n9 , n10;
    int countEven = 0;
    int countOdd = 0;

    printf("Enter n1: ");
    scanf("%d", &n1);

    printf("Enter n2: ");
    scanf("%d", &n2);

    printf("Enter n3: ");
    scanf("%d", &n3);

    printf("Enter n4: ");
    scanf("%d", &n4);

    printf("Enter n5: ");
    scanf("%d", &n5);

    printf("Enter n6: ");
    scanf("%d", &n6);

    printf("Enter n7: ");
    scanf("%d", &n7);

    printf("Enter n8: ");
    scanf("%d", &n8);

    printf("Enter n9: ");
    scanf("%d", &n9);

    printf("Enter n10: ");
    scanf("%d", &n10);

    if(n1 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n2 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n3 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n4 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n5 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n6 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n7 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n8 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n9 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    if(n10 % 2 == 0){
        countEven = countEven + 1;
    }
    else{
        countOdd = countOdd + 1;
    }

    printf("Count of even is : %d\n",countEven);

    printf("Count of odd is: %d\n",countOdd);

    return 0;
}
