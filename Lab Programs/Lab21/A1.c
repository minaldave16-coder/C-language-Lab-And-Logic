#include <stdio.h>
struct employee{
    char name[500];
    int empnum;
    int salary;
    char designation[50];
};

int main(){
    struct employee emp1 = {"Spongebob", 30, 250000 , "Chemist"};
    struct employee emp2 = {0};
    printf("Enter name of the employee: ");
    scanf("%s", &emp2.name);
    printf("Enter employee num.: ");
    scanf("%d", &emp2.empnum);
    printf("Enter salary: ");
    scanf("%d", &emp2.salary);
    printf("Enter designation: ");
    scanf("%s", &emp2.designation);

    printf("**************EMPLOYEE 1********************\n");
    printf("%s\n%d\n%d\n%s\n",emp1.name , emp1.empnum , emp1.salary , emp1.designation);
    
    printf("**************EMPLOYEE 2********************\n");
    printf("%s\n%d\n%d\n%s\n",emp2.name , emp2.empnum , emp2.salary , emp2.designation);

    return 0;
}