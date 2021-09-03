#include<stdio.h>
#include<stdlib.h>
struct rectangle{
    int length,breadth;
    
};
int main()
{
   struct rectangle r1;
   struct rectangle *r2;
   r2=&r1;
//    (*r2).length=55;
//    (*r2).breadth=97;
   r2->length=85;
   r2->breadth=753;
   printf("%d\n%d",r1.length,r1.breadth);
return 0;
}