#include <stdio.h>

int main(){
    int n = 1 , temp , sum = 0 , i = 1;

    while(i <= 10){
        temp = n * n;
        if(temp % 10 == 9){
            sum = sum + temp;
            i++;
            n++;            
        }
        else{
            n++;
        }
        
    }
    printf("%d ",sum);

    return 0;

}