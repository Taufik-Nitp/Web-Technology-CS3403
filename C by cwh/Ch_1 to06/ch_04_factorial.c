#include<stdio.h>            // write a program to print the factorial of any number given by user.
int main()
{
int i,n,product=1;           // Why we need to tell taht initial value of the product is 1.
printf("write the number you want the factorial......");
scanf("%d",&n);
for (i=1;i<=n;i+=1 ){
    product*=i;
}
printf("the factorial of the number is %d",product);
return 0;
}