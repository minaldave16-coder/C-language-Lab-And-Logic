#include <stdio.h>

int main(){

    int row , column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    for(int i = 1 ; i <= row ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}    
