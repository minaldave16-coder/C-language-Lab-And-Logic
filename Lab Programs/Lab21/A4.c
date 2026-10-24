#include <stdio.h>
struct stud{
    char name[500];
    float per;
    int age;
};

int main(){
    struct stud s[5] = {0};

    for(int i = 0 ; i < 5 ; i++){
    printf("Enter name of the student: ");
    scanf("%s", &s[i].name);
    printf("Enter percentage: ");
    scanf("%f", &s[i].per);
    printf("Enter age: ");
    scanf("%d", &s[i].age);
    }
    
    for(int i = 0 ; i < 5 ; i++){
        printf("****************STUDENT%d******************\n",i+1);
    printf("%s\n%f\n%d\n",s[i].name , s[i].per , s[i].age);
    }
    
    return 0;
}