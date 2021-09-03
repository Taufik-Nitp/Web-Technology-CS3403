#include<stdio.h>
int main()
{
int a,b;
float division;
printf("Write the value of a\n");
scanf("%d",&a);
printf("Write the value of b\n");
scanf("%d",&b);
printf("The sum of a and b is %d\n",a+b);
printf("The subtraction of a and b is %d\n",a-b);
printf("The multiolication of a and b is %d\n",a*b);
division= (float)a/b;
printf("The division of a and b is %f",division);
return 0;
}