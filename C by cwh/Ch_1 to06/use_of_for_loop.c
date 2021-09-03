#include<stdio.h>
int main()
{
int i,n;
printf("The number upto which you want to print the natural number is \n");
scanf("%d",&n);
for( i=1;i<=n;i+=1){
printf("%d\n",i);
}
return 0;
}