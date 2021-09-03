#include<stdio.h>
#include<stdlib.h>
// #include<stddef.h>
int main()
{
int *p;       
p=(int*)malloc(5*sizeof(int));    //dynamic array allocation
p[2]=64;                        //reading
p[3]=78;
printf("%d  %d\n",*(p+2),*(p+3));    //accessing
// Increasing the size of array in heap memory
int *r;
r=(int *)malloc(7*sizeof(int));
for(int i=0;i<7;i++){
    r[i]=i;
}
int *q;
q=(int*)malloc(10*sizeof(int));
for(int i=0;i<7;i++){
    q[i]=r[i];
}
free(r);
r=q;
q=NULL;
printf("%d  %d  %d  %d  %d",r[8],r[4],r[1],r[3],r[2]);
// increasing size using reallocp;
int *ptr;
ptr=(int *)malloc(5*sizeof(int));
ptr[0]=2,ptr[1]=4,ptr[2]=6;
ptr=realloc(ptr,10*sizeof(int));
ptr[8]=8;
for(int i=0;i<10;i++){
    printf("\n%d\n",ptr[i]);
}
free(ptr);
return 0;
}