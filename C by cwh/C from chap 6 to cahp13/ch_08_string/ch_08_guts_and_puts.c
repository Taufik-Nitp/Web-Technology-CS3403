#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main()
{
char str[40];
printf("write your name: ");
// gets(str);  
// printf("your name is %s",str);
gets(str);
puts(str);
printf("is a good boy");
int a=strlen(str);
printf("\n%d",a);
return 0;
}