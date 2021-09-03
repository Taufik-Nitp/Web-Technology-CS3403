#include<stdio.h>
#include<string.h>
struct employee{  //defining struct is basicaly defining a custom datatype.
    int code;      
    float salary;        // here,now employee is a custom datatype just like int,float, char.
    char name[50];
};
int main()
{
struct employee  e1;
struct employee  *ptr; // this is a pointer and it can store the adress of any variable.
     ptr=&e1;
    // (*ptr).code=422;   // shortcut of this is below
    ptr->code=3553;
    ptr->salary=39858.325;
    strcpy(ptr->name,"taufik");
    
    printf("the code of e1 is %d\nthe salary of e1 is :%f\nthe name of e1 is: %s",e1.code,e1.salary,e1.name);

return 0;
}