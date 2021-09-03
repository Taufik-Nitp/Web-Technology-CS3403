#include<stdio.h>  // wap in c to find the length of string .
int main()
{
    int i=0;
char str[100];
printf("Enter the string\n");
scanf("%s",str);
int count=0;
while(str[i]!='\0'){
     count+=1;
     i++;
}
printf("The length of the string is %d",count);
return 0;
}