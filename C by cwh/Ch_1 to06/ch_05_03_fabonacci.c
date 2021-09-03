#include<stdio.h> 
int fabonacci(int n);        // Write a program to find the n'th number of fabonacci series using recursion.
int main()
{
    int n;
printf("Write the value of n\n");     // this programm is completed by me without any help.
scanf("%d",&n);
printf("The value of the %dth fabonacci number is %d",n,fabonacci(n));
return 0;
}
int fabonacci(int n){
   int i,value;
   for (i=1;i<n;i++){
   if (i==1 && i==0){
       value=1; 
   }
   else 
   {
       value= fabonacci(n-1) + fabonacci(n-2); 
   }
   }
   return value;
}
