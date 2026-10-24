#include <stdio.h>
struct book{
    char title[500];
    char author[50];
    char publication[50];
    int price;
};

int main(){
    struct book b1 = {0};
    printf("Enter name of the book: ");
    scanf("%s", &b1.title);
    printf("Enter name o author: ");
    scanf("%s", &b1.author);
    printf("Enter name of publication: ");
    scanf("%s", &b1.publication);
    printf("Enter price: ");
    scanf("%d", &b1.price);

    struct book b2 = {0};
    printf("Enter name of the book: ");
    scanf("%s", &b2.title);
    printf("Enter name o author: ");
    scanf("%s", &b2.author);
    printf("Enter name of publication: ");
    scanf("%s", &b2.publication);
    printf("Enter price: ");
    scanf("%d", &b2.price);

    struct book b3 = {0};
    printf("Enter name of the book: ");
    scanf("%s", &b3.title);
    printf("Enter name o author: ");
    scanf("%s", &b3.author);
    printf("Enter name of publication: ");
    scanf("%s", &b3.publication);
    printf("Enter price: ");
    scanf("%d", &b3.price);

    printf("**************BOOK1********************\n");
    printf("%s\n%s\n%s\n%d\n",b1.title , b1.author , b1.publication , b1.price);
    
    printf("**************BOOK2********************\n");
    printf("%s\n%s\n%s\n%d\n",b2.title , b2.author , b2.publication , b2.price);

    printf("**************BOOK3********************\n");
    printf("%s\n%s\n%s\n%d\n",b3.title , b3.author , b3.publication , b3.price);


    return 0;
}