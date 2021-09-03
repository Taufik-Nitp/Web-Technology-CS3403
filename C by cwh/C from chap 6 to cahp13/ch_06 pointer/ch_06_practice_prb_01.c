#include<stdio.h> 
int main()
{                              // Qn.(1)  Wrie a program to find the adress of a variable . Use this adress to get the 
  int a=5;                       // value  of this variable . and also find the adress of adress of a .
  int *j= &a;
  int **k = &j;
  printf("The adress of the variable a is %u",j);                       
  printf("The value of the above variable a is %d \n The value of the adress of the adress of a is %u\n",*j,k);
  printf("the value of the variable a is %d",*&a);
return 0;
}