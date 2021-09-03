#include<stdio.h>
void encrypt(char *c){ // encryption
    int i=0;
    char *ptr=c;
    while(*ptr!='\0'){
    *ptr=*ptr+1;
        ptr++;
        i++;
    }
}
void decrypt(char *c){ // decryption
    int i=0;
    char *ptr=c;
    while(*ptr!='\0'){
    *ptr=*ptr-1;
        ptr++;
        i++;
    }
}

int main()
{
char msg[50],decmsg[50];
printf("write your message:");
gets(msg);
encrypt(msg);
printf("your message is \n %s",msg);
printf("\nEnter your decryped message here\n");
gets(decmsg);
decrypt(decmsg);
printf("your decrypted message is\n %s:",decmsg);

return 0;
}
