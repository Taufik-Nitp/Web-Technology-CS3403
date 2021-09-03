#include<stdio.h>
int x=0;  // global variable and it will have a single copy.
int fun1(int v){
    if(v>0){
    printf("%d",v);
    fun1(v-1);
    fun1(v-1);
        }
    
}
int main()
{
int n;
scanf("%d",&n);
int a=fun1(n);
// int b=fun1(n);
printf("%d",a);
// printf("%d",b);
return 0;
}