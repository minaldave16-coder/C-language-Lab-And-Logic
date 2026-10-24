#include <stdio.h>
#include <math.h>

int main(){

    float n = 0;
    float sqrtn;

    for(float n = 0; n <= 9; n++){
        sqrtn = sqrt(n);
        printf("%0.2f  has root = %0.2f\n",n , sqrtn);
    }
    return 0;
}