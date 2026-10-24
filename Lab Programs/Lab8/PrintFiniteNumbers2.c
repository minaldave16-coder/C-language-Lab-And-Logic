#include <stdio.h>

int main(){
    int i = 0;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i < n){
        i = i + 1;
        printf("%d\n",i);
    }
    return 0;
}