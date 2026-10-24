#include <stdio.h>

int main(){

    int n, *p, *q;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n] , b[n];
    p = a;
    q = b;

    for(int i = 0; i < n ; i++){
        printf("Enter element: ");
        scanf("%d", p+i);
    }
    for(int i = 0 ; i < n ; i++){
        *(q + i) = *(p + i);
    }

    printf("Array2 after copying: ");
    for(int i = 0 ; i < n ; i++){
        printf("%d ", *(q + i));
    }

    return 0;
}