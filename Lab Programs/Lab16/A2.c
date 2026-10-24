#include <stdio.h>
int main(){

    int countp = 0 , countn = 0 , count = 0;
    int a[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter element [%d][%d] : ", i+1 , j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(a[i][j] > 0){
                countp++;
            }
            else if(a[i][j] < 0){
                countn++;
            }
            else{
                count++;
            }
        }
    }
    
    printf("The count of positive , negative and zero is %d , %d , %d respectively", countp , countn , count);

    return 0;
}