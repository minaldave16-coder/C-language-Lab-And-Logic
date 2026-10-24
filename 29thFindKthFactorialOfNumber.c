#include <stdio.h>

int main(){
    int n;
    int k;
    int count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count = count + 1;
            printf("Factors are: %d\n", i);
            if(count == k){
                printf("The %dth factor of %d is: %d\n", k, n, i);
            }
        }
    }
    if(k > count){
            printf("-1\n");
        }
    return 0;
}