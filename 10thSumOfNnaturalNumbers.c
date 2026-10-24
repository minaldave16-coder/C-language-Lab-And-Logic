#include <stdio.h>
#include <math.h>

int main(){
    
    int n;
    int ans = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++){
        ans = ans + i;
     
    }

    printf("Answer: %d",ans);

    return 0;
}