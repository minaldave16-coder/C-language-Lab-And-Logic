#include <stdio.h>

int main(){
    int n, fd, ld, newN , temp;

    printf("Enter n: ");
    scanf("%d", &n);

    ld = n % 10;
    temp = n;
    fd = temp/10;
    newN = 1;

    while (fd >= 10) {
        fd = fd / 10;
        newN = newN * 10;
    }

    printf("%d", ld);
    while(newN > 1) {
        printf("%d", (n / newN) % 10);
        newN = newN / 10;
    }
    printf("%d", fd);

    return 0;
}