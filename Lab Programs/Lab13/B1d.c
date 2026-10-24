#include <stdio.h>

int main(){

    int row;
    char ch = 'A';

    printf("Enter rows: ");
    scanf("%d", &row);
    

    for(int i = 1 ; i <= row ; i++){

        for(int s = 1 ; s <= row - i + 1 ; s++){
            printf(" ");
        }
       for(int j = 1 ; j <= i ; j++){
        if(i % 2 == 0){
            printf("%c ",ch++);
        }
        else{
            printf("%d ",j);
        }
      }
      printf("\n");
    }
    return 0;
}