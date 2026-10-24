#include <stdio.h>

int main(){

    int row , column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    int k;
    for(int i = 1 ; i <= row ; i++){
          k = row;
        for(int j = 1 ; j <= i ; j++){
            printf("%d",k--);
        }
        printf("\n");
    }

    return 0;
}    
