#include <stdio.h>

int main(){
    int a;
    int b;
    int ans = 0;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    for(int i = 0 ; i < a ; i++){
        ans = ans + b;
    }


    printf("The answer of multiplication without using * is : %d",ans);

    return 0;
}