#include<stdio.h>
#include<string.h>
typedef struct employee{  // by using typedef we can define alias of a struct
    int code;      
    float salary;
    char name[50];
}emp;                   // now we can use emp in place of struct eployee
int main()
{
emp  e1;            // here it is used.
emp *ptr; 
     ptr=&e1;
    
    ptr->code=3553;
    ptr->salary=39858.325;
    strcpy(ptr->name,"taufik");
    
    printf("the code of e1 is %d\nthe salary of e1 is :%f\nthe name of e1 is: %s",e1.code,e1.salary,e1.name);

return 0;
}