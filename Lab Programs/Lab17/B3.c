#include <stdio.h>

int main(){

    //Add two matrix using pointer

    int r , c;
    int *p , *q;
    printf("Enter no of rows: ");
    scanf("%d", &r);

    printf("Enter no of columns: ");
    scanf("%d", &c);

    int a[r][c],b[r][c] , sum[r][c];

    p = &a[0][0];
    q = &b[0][0];
    for(int i = 0; i< r ; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element of Array1: ");
            scanf("%d", p+i*c+j);
        }
    }

    printf("\n\n\n");
    // for(int i = 0 ; i < r ; i++){
    //     for(int j = 0 ; j < c ; j++){
    //         printf("%d ",*(p+i*c+j));
    //     }
    //     printf("\n");
    // }

    for(int i = 0; i< r ; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element of Array2: ");
            scanf("%d", q+i*c+j);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%d  ",*(p+i*c+j)+*(q+i*c+j));
        }
        printf("\n");
    }

    return 0;
}