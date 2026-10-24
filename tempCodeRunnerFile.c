#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    int temp = 0;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d ",a);
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;

}