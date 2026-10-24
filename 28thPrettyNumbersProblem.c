#include <stdio.h>

int main(){
    int L;
    int R;
    int count = 0;
    printf("Enter the value of L: ");
    scanf("%d", &L);

    printf("Enter the value of R: ");
    scanf("%d", &R);

    for(int n = L; n <= R; n++){
        if(n % 10 == 2 || n % 10 == 3 || n % 10 == 9){
            count++;
        }
    }
    printf("The count of pretty numbers is: %d\n", count);
    return 0;
}//There is no such thing as pretty numbers in mathematics, but for the purpose of this program,
// we define pretty numbers as those that end with the digits 2, 3, or 9. The program counts how many such numbers exist in the reange
// from L to R (inclusive) and outputs the count.