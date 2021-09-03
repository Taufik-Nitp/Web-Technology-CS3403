#include<stdio.h>
int main()
{
// int fun(int);
int i=fun(10);
printf("%d\n",i);
printf("%d\n",--i);
printf("%d\n",i);
printf("%d\n",i--);

printf("%d\n",--i);
return 0;
}
int fun(int i){
    printf("%d\n",i+6);
return(i++);
}