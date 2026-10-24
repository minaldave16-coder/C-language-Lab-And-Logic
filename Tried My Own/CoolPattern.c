#include <stdio.h>

int main(){

    int row , column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    for(int i = 1; i <= row; i++){

        for(int j = 1; j <= row - i; j++){
            printf(" ");
        }

        for(int s = 1; s <= i; s++){
            printf("* ");
        }

        printf("\n");
    }
    for(int i = 1; i<=row ; i++){

        for(int j = 1 ; j <= i-1 ; j++){
            printf(" ");
        }
        for(int s = 1; s < row-i+1 ; s++){
            printf(" *");
        }

        printf("\n");
    }
    return 0;
}