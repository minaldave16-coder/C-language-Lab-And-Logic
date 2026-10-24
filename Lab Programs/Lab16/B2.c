#include <stdio.h>

int main(){
    //Asume that the user will enter a square matrix

    int r , c; 
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    int b[r][c];
    int multiply [r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            multiply[i][j]=0;
        }
        
    }
    
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter elements for matrix A [%d][%d]: ", i+1 , j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter elements for matrix B [%d][%d]: ", i+1 , j+1);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            for(int k = 0 ; k < r ; k++){
                multiply[i][j] = multiply[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }

    return 0;
}