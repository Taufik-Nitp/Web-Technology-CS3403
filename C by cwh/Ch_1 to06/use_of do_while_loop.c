#include<stdio.h>    //Write a program to print the first n natural number using do while loop
int main()
{
int  i=0,n;
printf("Write the value of number upto which you want to print the natural number\n");
scanf("%d",&n);
do {
    printf("%d\n",i++);
    i++;
}
while (i<n); 
return 0;
}