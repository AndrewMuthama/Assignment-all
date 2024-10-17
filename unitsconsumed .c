#include <stdio.h>
int main () {   
    int customerid,unitsconsumed;
    char customername[50];
    float chargersperunit,totalbill,surcharge=0.0;
    
    printf("Enter customerid:");
    scanf("%d",&customerid);
    printf("Enter unitsconsumed:");
    scanf("%d",&unitsconsumed);
    printf("Enter customername");
    scanf("%s",&customername);
    
    if(unitsconsumed<200) {
       chargersperunit=1.2;
    } else if  (unitsconsumed >= 200 && unitsconsumed < 400) {
        chargersperunit=1.5;
    } else if (unitsconsumed >= 400 && unitsconsumed < 600)  {
        chargersperunit=1.8;
    } else { 
       chargersperunit=2.0;
    }   
     //calculate totallbill
    totalbill= unitsconsumed * chargersperunit;
    
    //Apply  surcharge if totalbill exceeds 400;
    if (totalbill > 400) {
        surcharge= totalbill*0.15;
        totalbill+=surcharge;
    }
    
    
     return 0;
     }
    