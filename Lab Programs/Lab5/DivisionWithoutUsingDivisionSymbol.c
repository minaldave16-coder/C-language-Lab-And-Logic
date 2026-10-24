#include <stdio.h>

int main(){
    int a;
    int b;
    int count = 0;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    if(b == 0){
        printf("Division by zero is not allowed.\n");
    return 0;
}

    while(a - b >= 0){
        a = a - b;
        count = count + 1;
    }

    printf("The value of division without using / is: %d",count);

return 0;

}