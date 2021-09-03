#include<stdio.h> 
int main()
{
char str[423];
char str2[50];
char c;
printf("enter the string 1\n");
scanf("%s",str);
printf("%s",str);
printf("enter name character by character\n");
fflush(stdin);
int i=0;
while (c!='\n'){
    fflush(stdin);
       scanf("%c",&c);
    str2[i]=c;
    i++;
}
str2[i-1]='\0';
printf("\ncharacter by character is %s",str2);
return 0;
}