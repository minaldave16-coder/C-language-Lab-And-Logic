#include <stdio.h>

int main(){

    int row , column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    for(int i = 1; i <= row; i++){

        for(int s = 1; s <= row - i; s++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("%d ",j);
        }

        printf("\n");
    }
    return 0;
}