// #include <stdio.h>

// int main(){

//     int row , column;

//     printf("Enter Rows: ");
//     scanf("%d", &row);

//     printf("Enter Columns: ");
//     scanf("%d", &column);

//     for(int i = 1 ; i <= row ; i++){
//         for(int j = 1 ; j <= row - i; j++){
//             for(int s = 32 ; s > i ; s){
//                 printf("%c*%c" , s , s);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

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
    return 0;
}