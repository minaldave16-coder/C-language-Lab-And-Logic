#include <stdio.h>

void Value(int a1, int b1);
void Reference(int *a2, int *b2);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    Value(a, b);
    printf("After call by value: a = %d, b = %d\n", a, b);

    Reference(&a, &b);
    printf("After call by reference: a = %d, b = %d\n", a, b);

    return 0;
}

void Value(int a1, int b1) {
    int temp = a1;
    a1 = b1;
    b1 = temp;

}

void Reference(int *a2, int *b2) {
    int temp = *a2;
    *a2 = *b2;
    *b2 = temp;
}