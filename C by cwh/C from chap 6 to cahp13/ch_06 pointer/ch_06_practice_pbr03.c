#include<stdio.h> // jWrite a program to change the value of a variable to 10 times the initial value.
void multiply(int *x); // Write a function and pass the value by refrence.
int main()
{
int a;
int *j=&a;
printf("write the value of the initial number\n");
scanf("%d",&a);
multiply(&a);   //this is calling by refrence/adress.
return 0;
}
void multiply(int *x){  //here *x means it has got the value at a.
    // int x;   // this will give error bbecause x is already used in defining the multiply function.
    printf("the value of the initial number after multipy it by 10 is %d",(*x)*10);
}