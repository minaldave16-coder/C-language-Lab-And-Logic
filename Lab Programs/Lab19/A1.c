// #include <stdio.h>
// int fact(int n);

// int main(){
//     int n;
//     printf("Enter positive number you want to find factorial of: ");
//     scanf("%d", &n);

//     int result = fact(n);

//     printf("%d", result);

//     return 0;
// }

// int fact(int n){
     
//     int f=1;
//     for(int i = 1 ; i <=n ; i++){
//         f = f*i;
//     }

//     return f;
// }

#include <stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int result = fact(n);
    printf("%d",result);
}

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}