#include<stdio.h>
#include<string.h>  //  
int main()
{
char *source={"this is taufik ali"};
char target[10];
strcpy(target,source);// copy of string from source  to target.
printf("%s",target);
return 0;
}