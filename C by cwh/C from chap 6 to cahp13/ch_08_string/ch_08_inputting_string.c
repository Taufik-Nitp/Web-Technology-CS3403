#include<stdio.h>
int main()
{
char str[10];
printf("write your name: ");
scanf("%s",str);  // it cannot take multiple word strings,for that we use gets and puts.
printf("your name is %s",str);
return 0;
}