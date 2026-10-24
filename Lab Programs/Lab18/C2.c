#include <stdio.h>
int word(int n);

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    word(n);

    return 0;
}

int word(int n1)
{

    char *one[] = {"one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
    char *tens[] = {" " , " " , "twenty" , "thirty" , "fourty" , "fifty" , "sixty" , "seventy" , "eighty" , "ninty"};

    if(n1 > 100)
    return 0;
}