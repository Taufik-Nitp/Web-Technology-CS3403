#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct array{
    int arr[4];
};
struct array fun(struct array ar){
    ar.arr[0]=54;
    ar.arr[1]=55;
    ar.arr[2]=57;
    ar.arr[3]=58;
    return ar;
}
int* fun2(int ar1[],int ar2[]){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]=ar1[i]+ar2[i]+i;
    }
    return ptr;
}

int main(){
//     struct array ar1;
    
//     struct array pt=fun(ar1);
//     printf("%d\n",pt.arr[0]);
//     printf("%d\n",pt.arr[1]);
//     printf("%d\n",pt.arr[2]);
//     printf("%d\n",pt.arr[3]);
// printf("-------------------____________________-------------------____________________----------------\n");
int arr1[5]={1,2,3,4,5},arr2[5]={5,4,3,2,1};
int *ptr11=fun2(arr1,arr2);
for (int i=0;i<5;i++){
    printf("%d  ",*ptr11);
    ptr11++;
}
return 0;
}