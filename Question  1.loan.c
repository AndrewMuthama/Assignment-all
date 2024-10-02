//calculation of compound interest 
#include <stdio.h>
int main () {
    int age;
    float income;
    printf("Enter age:");
    scanf("%d",&age);
    
    printf("Enter income:");
    scanf("%f",&income);
    
    if(age>=21 && income>=21000) {
    printf("congratulations you qualify for a loan");
    } else {
    printf("unfortunately,we are unable to offer you a loan at this time");
    }
    
    
    
    return 0;
    
    }
    