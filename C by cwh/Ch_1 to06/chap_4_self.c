#include<stdio.h>
int main()
{                                   // this program is not working.............................
int i,n,count=0;
printf("write any number\n");
scanf("%d",&n);
  while (i<=n/2){
    if (n%i==0){
        count=1;
        break;
           }
         i++;
    if (count==0){
        printf("This is not a prime number");
    }
    else 
    printf("This is a prime number");
  }
     return 0;
}