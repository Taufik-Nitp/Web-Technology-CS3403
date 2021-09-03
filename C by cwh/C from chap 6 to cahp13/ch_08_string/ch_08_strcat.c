#include<stdio.h>
#include<string.h>
int main()
{
char str1[]={"hello my name is ta"}; // if i use char *str1 instead of str1[],then it is giving error
char str2[]={"ufik ali"};
strcat(str1,str2);//conctinate str2 in str1.
printf("%s",str1);
return 0;
}