#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d", &a, &b);
// scanf("%d", &b);
if  ( a+b<50){
    printf("this is less than 50");
} 
else printf("this is not less than 50");
return 0;
}