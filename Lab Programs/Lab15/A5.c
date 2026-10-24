// #include <stdio.h>

// int main(){

//     int n;

//     printf("Enter the size of the string: ");
//     scanf("%d", &n);

//     char ch[n];

//     printf("Enter a value: ");
//     for(int i = 0 ; ch[i] != '\0' ; i++){
//         scanf(" %c", &ch[i]);
//     }

//     int size = sizeof(ch) / sizeof(ch[0]);
//     printf("The size of string is : %d", size);

//     return 0;
// }

#include <stdio.h>

int main(){
    char str[100];
    int length = 0;
    int i = 0;

    printf("Enter String: ");
    scanf("%s", str);
    while(str[i++] != '\0'){
        length++;
    }

    printf("String = %s\n", str);
    printf("Length = %d", length);

    return 0;
}