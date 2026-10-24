#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    int sum = 0, mean = 0;
    double sumx = 0 , harmonic = 1 , geometric = 1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter entry %d: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; i++)
    {
        sumx = sumx + (1.0 / a[i]);
    }
    harmonic = n / sumx;
    
    geometric = sqrt(mean*harmonic);

    printf("The value of am , gm , hm is %d , %lf , %lf respectively", mean , geometric , harmonic);
    return 0;
}