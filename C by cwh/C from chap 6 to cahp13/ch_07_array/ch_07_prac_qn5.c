#include<stdio.h>// write a program of 2d array of 3x10 in which you have to store and print the multiplication of 2,7,9.
void function(int a[], int num, int level){
      for(int i=0;i<num;i++){
          a[i]=level*(i+1);
      }
      for (int i=0;i<num;i++){
          printf("%d x %d = %d\n",level,(i+1),a[i]);
      }
}
int main()
{
    int mult[3][10];

    function(mult[0],10,2);
    function(mult[1],10,7);
    function(mult[2],10,9);
// int mult[3][10];
// for (int j=0;j<10;j++){
    
//         mult[0][j]=2*(j+1);
    
// }
// for (int j=0;j<10;j++){
    
//         mult[1][j]=7*(j+1);
    
// }
// for (int j=0;j<10;j++){
    
//         mult[2][j]=9*(j+1);
    
// }

//     for(int j=0;j<10;j++){
//         printf("2 x %d = %d \n",j+1 ,mult[0][j]);
//     }
    
//     for(int j=0;j<10;j++){
//         printf("7 x %d = %d \n",j+1 ,mult[1][j]);
//     }
    
//     for(int j=0;j<10;j++){
//         printf("9 x %d = %d \n",j+1 ,mult[2][j]);
//     }

return 0;
}