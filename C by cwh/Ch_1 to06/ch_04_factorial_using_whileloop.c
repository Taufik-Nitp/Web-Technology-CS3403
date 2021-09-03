#include<stdio.h>     ///write  a program to find the factorial using while loop.
int main()
{
int i=1,n,product=1 ;
printf("write the number you want to print the factorial  ");
scanf("%d",&n);
while (i<=n){
    product*=i;
    i+=1;
}
printf("the factorial is %d",product);
return 0;
}