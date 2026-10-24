
#include <stdio.h>

void prime(int a1, int b1);

int main(){
    int a, b;

    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    prime(a, b);

    return 0;
}

void prime(int a1, int b1){
    int flag;

    for (int i = a1+1; i < b1; i++){
        flag = 1;
        if (i < 2){
            flag = 0;
        }

        for (int j = 2; j < i; j++){
            if (i % j == 0){
                flag = 0;
                break;
            }
        }

        if (flag == 1){
            printf("%d ", i);
        }
    }
}

//HERE IT IS PRESSUMED THAT "****a<b****"....IF BY ANY ACCIDENT IF "****a>b****" THEN THE LOOP WON"T BE EXECTED AT ALL.
