#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int code,age;
     char *name;
};
void func(struct student *std){ // to accept the adress use pointer .
    std->code=35335;
    (*std).age=37;
} 
int main()
{
struct student s1={2542,35};
func(&s1); //s passing the adress of the whole strcture to func function;
printf("%d\n%d",s1.code,s1.age);
return 0;
}


