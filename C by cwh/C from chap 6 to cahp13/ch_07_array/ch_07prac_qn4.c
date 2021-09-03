#include<stdio.h>  // write a program containing a function which counts the number of positive integers in an array.
int function(int a[]){
    int positive_cont=0;
    for (int i=0; i<10; i++){
     if (a[i]>0){
         positive_cont++;
              }
                  }
                  
    return positive_cont;
}
int main()
{
int arr[]={1,2,-3,4,5,-6,7,-8,-9,10};
function(arr);
printf("the number of positive number is %d",function(arr));
return 0;
}