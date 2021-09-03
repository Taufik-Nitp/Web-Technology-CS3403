#include<stdio.h>
int x=0;


int fun1(int v){
    if(v>0){
    x++;

    v=fun1(v-1)+v;

    }
    return v;
}
int main()
{
int n;
scanf("%d",&n);
int a=fun1(n);
printf("%d",a);
return 0;
}