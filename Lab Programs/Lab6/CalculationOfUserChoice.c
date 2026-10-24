#include <stdio.h>

int main(){
    int a , b;
    int result;
    char choice;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter your choice of operator from (+ , - , * , / , %): ");
    scanf(" %c", &choice);

    printf("Enter b: ");
    scanf("%d", &b);

    if(choice == '+'){
        result = a + b;
        printf("The result of the given operation is: %d", result);
    }
    else if(choice == '-'){
        result = a - b;
        printf("The result of the given operation is: %d", result);
    }
    else if(choice == '*'){
        result = a * b;
        printf("The result of the given operation is: %d", result);
    }
    else if(choice == '/'){
        if(b == 0){
            printf("Not possible ... as b shouldn't be zero.");
        }
        else{
            result = a / b;
            printf("The result of the given operation is: %d", result);
        }
    }
    
    else if(choice == '%'){
        result = a % b;
        printf("The result of the given operation is: %d", result);
    }
    else{
        printf("It is an invalid operator.");
    }

    return 0;
}