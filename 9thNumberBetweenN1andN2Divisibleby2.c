#include <stdio.h>
#include <math.h>

int main(){

int n1;
int n2;
int i;
int found = 0;

printf("Enter n1: ");
scanf("%d", &n1);

printf("Enter n2: ");
scanf("%d", &n2);

for(int i = n1; i <= n2; i++){
    if(i % 2 == 0){
        printf(" %d ",i);
        found = 1;
    }   
}
return 0;

}