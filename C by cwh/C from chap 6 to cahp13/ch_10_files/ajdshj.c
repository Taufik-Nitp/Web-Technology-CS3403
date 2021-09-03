#include<stdio.h> // write a struct represrnting the complex number.
typedef struct complex{
    int x;
    int y;
}cmpl;
int main()
{
    // int *ptr;
  
 cmpl c1;
 cmpl *ptr;
// c1[50].x=25;
  ptr= &c1;
ptr->x=4464;
ptr->y=38573;
// c1[50].y=23;
// c1[51].x=253;
// c1[51].y=232356;
printf("the real and imaginary part ot the c1 is %d and %d\n",c1.x,c1.y);
// printf("the real and imaginary part ot the c1 is %d and %d",c1[51].x,c1[51].y);
printf("%d",ptr->x);
return 0;
}