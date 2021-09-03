#include<stdio.h>  
int main()
{
char *ptr="this is taufik ali";  // it can be reinitialized
  char ptrr[]="this is taufik ali";   // it cant be reinitialized or modified. 
  ptr = "this is rohan";
printf("%s\n%s",ptr,ptrr);
char s[50];  //it does not take multi words string.(it takes single word)
scanf("%s",&s);
printf("%s",s);
return 0;
}