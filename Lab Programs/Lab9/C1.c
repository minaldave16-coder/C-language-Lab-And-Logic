#include <stdio.h>

int main(){

    int n , rem , newN = 0 , remN , temp;

    printf("Enter n: ");
    scanf("%d", &n);

    while(n > 0){
        rem = n % 10;      
        n = n / 10;

        newN = (newN * 10) + rem;
    }

    while(newN > 0){
        remN = newN % 10;
        newN = newN / 10;
        
        temp = remN;
          switch(temp){
              case 0:
              printf("Zero ");
              break;

              case 1:
              printf("One ");
              break;

              case 2:
              printf("Two ");
              break;

               case 3:
              printf("Three ");
              break;

               case 4:
              printf("Four ");
              break;

               case 5:
              printf("Five ");
              break;

               case 6:
              printf("Six ");
              break;

               case 7:
              printf("Seven ");
              break;

               case 8:
              printf("Eight ");
              break;

               case 9:
              printf("Nine ");
              break;
          }
    }
    return 0;
}