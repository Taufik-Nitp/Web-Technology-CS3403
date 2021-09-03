#include<stdio.h>  //Write a rogram to find the sum of multiplication of 8.
int main()
{
int i,n,sum=0;

printf("type any number");
scanf("%d",&n);
for(i=1;i<=10;i+=1){
    sum+=n*i;
}
printf("the value of the required sum is-----:::%d",sum);
return 0;
}