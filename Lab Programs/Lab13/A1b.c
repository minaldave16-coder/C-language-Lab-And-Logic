#include <stdio.h>

int main(){

    int row , column;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    for(int i = row ; i > 0 ; i--){
        for(int j = 1 ; j <= i ; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}    
