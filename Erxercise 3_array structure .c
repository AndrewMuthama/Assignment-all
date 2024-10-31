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
    
         //input students details 
     for (int u=0;u<n;u++){
         printf("Enter Name and Marks for the students:%d",u+1);
         scanf("%s %d",students[u].name,&students[u].marks);
         }
    FILE *fptr=fopen("students.bin","wb");
    
    if(fptr==NULL){
        printf("Error opening the file!\n");
        return 1;
     }
     fwrite(students,sizeof(struct student),n,fptr);
         fclose(fptr);
         
         //read array 
         struct student read_students[n];
         fptr=fopen("students.bin","rb");
         if(fptr==NULL){
        printf("Error opening the file!\n");
        return 1;
     }
     fread(read_students,sizeof(struct student),n,fptr);
         fclose(fptr);
         
         
         printf("\nData read from  students.bin:\n");
         for (int u=0;u<n;u++){
         printf("Name:%s,Marks:%d\n",read_students[u].name,read_students[u].marks);
         }
         return 0;
         }
        