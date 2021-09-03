#include<stdio.h>
int main()
{
    
char *ptr;  
char name[]={'t','a','u','f','i','k',' ','a','l','i','\0'};
 ptr= name;
while(*ptr != '\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}