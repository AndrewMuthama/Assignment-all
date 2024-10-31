#include <stdio.h>

struct student{
    char name[50];
    int marks;
};
int main () {
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    
    struct student students[n];
    FILE *fptr=fopen("students.txt","a");
    
    if(fptr==NULL){
        printf("Error opening the file!\n");
        return 1;
     }
     //input students details 
     for (int u=0;u<n;u++){
         printf("Enter Name and Marks for the students:%d",u+1);
         scanf("%s %d",students[u].name,&students[u].marks);
         fprintf(fptr,"Name:%s,Marks%d\n",students[u].name,students[u].marks);
         }
         fclose(fptr);
         printf("Data written to  students.txt");
         return 0;
         }
        