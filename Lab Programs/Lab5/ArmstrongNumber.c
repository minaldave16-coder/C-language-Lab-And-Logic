// #include <stdio.h>
// #include <math.h>
// int DigitChecker(int);

// int main()
// {

//     int n;
//     int rem = 0;
//     float sum_cube = 0;

//     printf("Enter n: ");
//     scanf("%d", &n);
//     int temp = n;
//     int count = DigitChecker(n);

//     while (n > 0)
//     {
//         rem = n % 10;
//         sum_cube += pow(rem, count);

//         n = n / 10;
//     }
//     if (sum_cube == temp)
//     {
//         printf("This number is an Armstrong number");
//     }
//     else
//     {
//         printf("This number is not an Armstrong number");
//     }
//     return 0;
// }

// int DigitChecker(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         n = n / 10;
//         count = count + 1;
//     }
//     return count;
// }

#include <stdio.h>

int main(){
    int n , pow = 1 , count = 0 , sum = 0 , rem = 0 , temp;

    printf("Enter n: ");
    scanf("%d", &n);


    while(n > 0){
        rem = n % 10;
        count = count + 1;
        n = n / 10;
    }
    
    while(n > 0){
        rem = n % 10;
        pow = 1;
        for(int i = 1 ; i <= count ; i++){
            pow = pow * rem;
        }
        sum = sum + pow;
        n = n / 10;
    }
    temp = n;

    if(temp == sum){
        printf("The given number is an armstrong number.");
    }
    else{
        printf("The given numbers is not an armstrong number.");
    }

    return 0;
}