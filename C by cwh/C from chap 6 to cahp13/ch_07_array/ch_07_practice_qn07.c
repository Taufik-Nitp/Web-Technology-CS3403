#include<stdio.h>// Create a three dimensional array and print the adress of its element in increasing order.
int main()
{
int multidimention[2][3][5];
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<5;k++){
            printf("The valueof adresss of  %d row %d column and %d height is= %d\n",i+1,j+1,k+1,&multidimention[i][j][k]);
        }
    }
}

return 0;
}