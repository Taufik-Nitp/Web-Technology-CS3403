#include<stdio.h>
int main()
{
int i;
printf("Write any number \n");
scanf("%d",i);
if (i<=10){
    printf("This is less than 10 and greater than 0\n");}
    else if (10<i<20)
    {printf("This is less than 20 and greater than 10\n");
         }
    else if (20<=i<=30){
        printf("This is less than 30 and greater than 20\n");
    }
    else printf("This is greater than 30");
return 0;
}