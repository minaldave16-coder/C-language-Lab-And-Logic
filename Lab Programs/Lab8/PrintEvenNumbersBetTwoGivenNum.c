#include <stdio.h>

int main(){
    int x , y;
    int i;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    for(int i = x; i <= y; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;

}