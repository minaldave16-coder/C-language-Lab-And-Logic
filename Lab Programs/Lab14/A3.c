#include <stdio.h>

int main(){

    int n , m;
    int countE = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter entry %d: ", i+1);
        scanf("%d", &a[i]);
        m = a[i];
        if(m%2 == 0){
            countE++;
        }
    }
    printf("The count of even numbers is : %d\n", countE);
    return 0;
}