#include <stdio.h>

int main(){

    int row , column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    int ap = 1;

    for(int i = 1; i <= row; i++){

        for(int j = 1; j <= i;j++){
            printf("%d ", ap%2);
            ap++;
        }

        printf("\n");
    }
    return 0;
} 