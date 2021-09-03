#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[3][4];
a[2][3]=723;
printf("%d\n",a[2][3]);
printf("__________---------------------______________-------------\n");
//using partially (both)heap and stack memory;
int *b[3];       // array of pointer formed in stack memory
b[0]=(int *)malloc(4*sizeof(int));   
b[1]=(int *)malloc(4*sizeof(int)); //element(pointer) of array b pointing to the dynamic array formed in heap
b[2]=(int *)malloc(4*sizeof(int));
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        b[i][j]=i+j;
        printf("%d\n",b[i][j]);
    }
    
}
printf("__________---------------------______________-------------\n");
// using compete heap memory.
int **c;       // a pointer formed in stack memory
c=(int **)malloc(3*sizeof(int));         // an array of pointer foremd in heap.
c[0]=(int *)malloc(4*sizeof(int));        //an array of int formed in heap and assigned by c[0]
c[1]=(int *)malloc(4*sizeof(int));
c[2]=(int *)malloc(4*sizeof(int));
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        c[i][j]=i+j;
        printf("%d\n",c[i][j]);
    }
}
free(*c);
return 0;
}