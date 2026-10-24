#include <stdio.h>

int main(){

    int n;
    int sum = 0 , avg = 0 , min , max;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter entry %d: ", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
       
    }
    min=a[0],max=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        if (a[i]>max)
        {
            max=a[i];
        }
        
        
    }
    
    avg = sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %d\n", avg);
    printf("Min = %d\n",min);
    printf("Max = %d\n", max);

    return 0;
}