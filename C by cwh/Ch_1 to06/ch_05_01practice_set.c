#include<stdio.h>  // writte  a function to find the average of three nuber.
float average (int a,int b,int c);  //this is predefining to compiler that there will be  function which have argument 
float average (int a,int b,int c){     // here is the content of the function 
    float result;
     result=(float)(a+b+c)/3;
     return result;
}
int main()                          //as integer and return as float  
{
    int a,b,c;
printf("Write the value of a \n");
scanf("%d",&a);
printf("Write the value of b \n");
scanf("%d",&b);
printf("Write the value of c \n");
scanf("%d",&c);
printf("The value of average of the given three numberis %f",average( a, b, c));/// this is calling the function 
return 0;
}
// float average (int a,int b,int c){     // here is the content of the function 
//     float result;
//      result=(float)(a+b+c)/3;
//      return result;
// }