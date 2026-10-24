#include <stdio.h>

int main(){
    //user enters the number of chocolates they bought..if user gives 3 chocolate wrappers to the shopkeeper it gets one more chocolate...
    //here we assume tht user has bought more than 3 chocolates

    int n , wrap = 0;
    printf("Enter no. of chocolates bought: ");
    scanf("%d", &n);

    wrap = n;

        while(wrap >= 3){
            n = n + (wrap / 3);
            wrap = (wrap/3) + (wrap%3);

        }

    printf("You have %d total chocolates and %d total wrappers", n , wrap);

    return 0;
}