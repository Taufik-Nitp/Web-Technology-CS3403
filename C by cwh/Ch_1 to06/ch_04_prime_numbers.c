#include<stdio.h>   // Write a program to check wether a given number is prime or not using loops.
int main()
{
int i, n,prime=1;
printf("write the number you want to check it is prime or not  ");
scanf("%d",&n);
// while (i<n){
//     if (n%i==0){
// printf("it is not a prime number ");
//     }
//     else 
//     printf("this is a prime number.");
//     i++;
//     }
for(int i=2;i<n;i++)
    if (n%i==0){
        prime=0;
        break;
    }

    if (prime==0 && n!=2){
      printf("This is not a prime number");
      }
    else{
         printf("This is a prime number ");
    }
            return 0;
}