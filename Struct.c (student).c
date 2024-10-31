#include <stdio.h>
#include <string.h>
struct student{
char name[25];
char regNo[20];
char Email[25];
int phone;
float marks;
} student1;
int main () {
 
 strcpy(student1.name,"Andrew");
 strcpy(student1.regNo,"CT102/G/21382/24");
 strcpy(student1.Email,"andrewmuthama23@gmail.com");
 student1.phone = 231423;
 student1.marks=99;
 
 printf("name:%s \n",student1.name);
 printf("regNo:%s \n",student1.regNo);
 printf("Email:%s \n",student1.Email);
 printf("phone:%d \n",student1.phone);
 printf("marks:%f \n",student1.marks);

return 0;
}