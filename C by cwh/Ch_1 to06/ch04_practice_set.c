#include<stdio.h>                      
int main()
{
// int i=1 ,n;                       // 1... ----------------::::  //Write a program to print the multiplication of any number given by users.
// printf("type the number for which you want the multiplication");
// scanf("%d",&n);
// for(i=1;i<=10;i+=1){
//     printf("%d\n",n*i);
// }
// int i,n;                //  2....-------------:::::: // Write a program to print the multiplication in reverse order of any number given by users .
// printf("Write the number you want the reverse multiplication");
// scanf("%d",&n);
// for(i=10 ;i>0;i-=1){
//     printf("%d x %d = %d\n",n,i,n*i);
// }
int i=1,sum=0,n;             // 3...--------::::::::://write a program to find the sum of first n natural number using while loop.
printf("write the number upto which you want the sum\n");
scanf("%d",&n);
for(i=0;i<=n;i+=1){
    sum+=i;
    }
printf("The sum upto n term is %d",sum);

return 0;
}