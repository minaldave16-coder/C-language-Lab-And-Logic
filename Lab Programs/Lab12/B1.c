#include <stdio.h>

int main(){

    int row , column , sum = 0;

    printf("Enter Rows: ");
    scanf("%d", &row);

    printf("Enter Columns: ");
    scanf("%d", &column);

    for(int i = 1 ; i <= row ; i++){
        for(int j = 1 ; j <= i; j++){
           sum = sum + j;
        }
    }

    printf("The sum is %d", sum);
    return 0;
}