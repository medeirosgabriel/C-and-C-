#include <stdio.h>
#include <stdlib.h>

int main (){

    int m1[3][3] = {{2,4,5},{2,3,4},{5,6,7}};
    int m2[3][3] = {{12,4,5},{12,5,7},{12,43,6}};
    int m3[3][3];

    int sm1 = sizeof(m1)/sizeof(m1[0]), sm2 = sizeof(m1)/sizeof(m1[0]), sum;


    for (int i = 0; i < sm1; i++){
       for (int j = 0; j < sm2; j++) {
           sum = 0;
           for (int k = 0; k < sm1; k++) {
               sum += m1[i][k] * m2[j][k];
           }
           m3[i][j] = sum;
       }
   }

   for (int  i = 0; i < sm1; i++){
       for (int j = 0; j < sm2; j++) {
           printf("%d ", m3[i][j]);
       }
       printf("\n");
   }
}