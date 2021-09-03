#include<stdio.h>
int main()
{
int i=0,a;
printf("Write a number upto which you want to print the natural number \n");
scanf("%d",&a);
do{

    printf("%d\n",i);
    i+=2;
}
    
while (i<a);
{
    printf("%d",i);
}
return 0;
}