#include <stdio.h>

int main()
{
    int n;
    int i = 1 , count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

while(i <= n)
    {
        if (n % i == 0)
        {
           count = count + 1; 
        }
        i++;
    }
if(count == 2){
    printf("The number is a prime number");
}
else{
    printf("The number is a composite number");
}

    return 0;
}