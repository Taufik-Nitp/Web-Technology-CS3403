#include<stdio.h>
#include<string.h>
struct student{
    int math;
    float sci;
    char name[];
};
int main()
{
struct student s1;
  s1.math= 82;
s1.sci=88;
strcpy(s1.name,"taufik");
printf("maths marks is :%d\nscience marks is :%f\nname is:%s",s1.math,s1.sci,s1.name);

return 0;
}