#include <stdio.h>

int main(){

    int row;
    int value = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    for(int i = 1 ; i <= row ; i++){
        for(int s = 1 ; s <= row - i + 1 ; s++){
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++){
            int num = 1;
            int n1 = 1 , n2 = 1;
            for(int k = 1 ; k <= i - 1 ; k++){
                num = num * k;
            }
            for(int k = 1 ; k <= j - 1 ; k++){
                n1 = n1 * k;
            }
            for(int k = 1 ; k <= i - j ; k++){
                n2 = n2 * k;
            }
            value = num / (n1 * n2);
        printf("%d ", value);

        }
        printf("\n");
    }

    return 0;
}