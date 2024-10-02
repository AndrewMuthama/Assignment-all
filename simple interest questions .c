#include <stdio.h>
int main () {
    double p,r,t;
    
    printf("Enter p:");
    scanf("%lf",&p);
    printf("Enter r:");
    scanf("%lf",&r);
    printf("Enter t:");
    scanf("%lf",&t);
    
    double si=(p*r*t)/100;
    printf("the si is %lf", si);
    return 0;
    }