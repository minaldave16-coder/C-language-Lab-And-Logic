#include <stdio.h>
struct time{
    int h;
    int m;
    int s;
};
int main(){
    struct time t1 , t2 , t3;

    printf("Enter time 1: ");
    scanf("%d %d %d", &t1.h , &t1.m , &t1.s);

    printf("Enter time 2: ");
    scanf("%d %d %d", &t2.h , &t2.m , &t2.s);

    t3.s = t2.s + t1.s;
    t3.m = t2.m + t1.m;
    t3.h = t2.h + t2.h;

    if(t3.s >= 60){
        t3.s = t3.s - 60;
        t3.m++;
        if(t3.m >= 60){
            t3.m = t3.m - 60;
            t3.h++;
        }
    }

    printf("%d : %d : %d", t3.h , t3.m , t3.s);

    return 0;
}