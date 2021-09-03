#include<stdio.h>
void encrypt(char *c){
    int i=0;
    char *ptr=c;
    while(*ptr='\0'){
    ptr[i]=ptr[i+1];
        ptr++;
        i++;
    }
}
int main()
{
char msg[50];
printf("write your message");
gets(msg);
encrypt(msg);
puts(msg);
return 0;
}
