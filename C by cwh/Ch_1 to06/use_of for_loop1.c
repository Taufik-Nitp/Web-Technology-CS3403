#include<stdio.h>         //Write a program to print the first n naatural number in reverse order using for loop.
int main()
{
int i,n;
printf("Write any number\n");
scanf("%d",&n);
for (i=n; i>0;i--){
    printf("%d\n",i);
}
for(i=n; i<=2*n;i++){
    printf("%d\n",i);
}
return 0;
}