#include <stdio.h>
float multiply(float a,float b);
float divide(float a,float b);
float add(float a,float b);
float subtract(float a,float b);
   int main () {
       float num1,num2,result;
       int choice;
       
       printf("The first number:");
       scanf("%f",&num1);
       
       printf("The second number:");
       scanf("%f",&num2);
       
       printf("choose an operation:\n");
       printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
       printf("Enter your choice(1, 2，3, or4):");
       scanf("%d",&choice);
       
       switch (choice) {
       case 1:
           result=subtract(num1,num2);
           printf("difference:%.2f\n",result);
        case 2:
            result=add(num1,num2);
            printf("sum:%.2f\n",result);
        break;
        case 3:    
            result=multiply(num1,num2);
            printf("product:%.2f\n",result);
        break;
        case 4:
            if (num2==0){
            printf("Error:division by zero is undefined");    
            }else{
            result=divide(num1,num2);
            printf("quotient:%.2f\n",result);
            }
        break;
        
        default:
            printf("Invalid choice\n");
        }    
        return 0;
        }
       float subtract(float a,float b) {
           return a-b;
        }   
       float add(float a,float b) {
            return a+b;
        }    
       float multiply(float a,float b) {
            return a*b;
        }   
       float divide(float a,float b) {
           return a/b;
        }   
            
            