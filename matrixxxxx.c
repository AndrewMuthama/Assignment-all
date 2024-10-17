#include <stdio.h>
int main () {
    int i,j,u;
        int marks[2][2][3]={{{50,40,30},{40,30,30}},{{50,40,30},{40,30,50}}};
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    for(u=0;u<3;u++){
                        printf("marks[%d][%d][%d] = %d \n",i,j,u,marks[i][j][u]);
                            }
                                }
                                    }
                                        return 0;
}
    