#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
    }
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
// The series is calculated as follows: 1 - 2 + 3 - 4 + 5 - 6 + ... up to n terms.