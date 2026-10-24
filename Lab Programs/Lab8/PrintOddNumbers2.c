#include <stdio.h>

int main(){
    int i = -1;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i < (n - 1)){
        i = i + 2;
        printf("%d\n",i);
    }
    return 0;
}