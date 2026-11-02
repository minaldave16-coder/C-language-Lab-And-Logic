#include <stdio.h>
struct student{
    int marks;
    double avg;
    int roll;
};

int main(){
    struct student s1;
    printf("Enter information about student 1: ");
    scanf("%d %lf %d", &s1.marks , &s1.avg , &s1.roll);

    struct student *p;
    p = &s1;

    printf("%d", (p->roll));
}