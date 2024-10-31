#include <stdio.h>
#include <string.h>
struct book {
char title[50];
char author[50];
int publicationyear;
char ISBN[13];
float price;
} book1;
 int main () {
     
     printf("Enter title:");
     scanf("%s \n",&book1.title);
     
     printf("Enter author:");
     scanf("%s \n",&book1.author);
     
     printf("Enter publicationyear:");
     scanf("%d \n",&book1.publicationyear);
     
     printf("Enter ISBN:");
     scanf("%s \n",&book1.ISBN);
     
     printf("Enter price:");
     scanf("%f \n",&book1.price);
     
     printf("Title:%s \n",book1.title);
     printf("Author:%s \n",book1.author);
     printf("Publicationyear:%d \n",book1.publicationyear);
     printf("ISBN:%s \n",book1.ISBN);
     printf("Price:%f\n",book1.price);
     
     return 0;
     }