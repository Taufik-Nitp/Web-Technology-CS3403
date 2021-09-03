#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct rectangle{
    int length,breadth;
};
struct rectangle*func(){     // giving the adress of the whole struct when called
    
    struct rectangle *p;
    p=(struct rectangle*)malloc(sizeof(struct rectangle));  // allocating dynamic memory in heap and link adress to the pointer p
    p->length=50;
    p->breadth=38;
    return p;
    free(p);
}
int main()
{
 struct rectangle *rect=func();    // int main has not defing any struct variable but it get this from func
 
 printf("%d\n%d",rect->length,rect->breadth);
return 0;
}