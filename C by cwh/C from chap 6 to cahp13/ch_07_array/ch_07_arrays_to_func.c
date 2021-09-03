#include<stdio.h>
// void printarray(int*ptr,int a){   // it states to take address and an integer.
//     for (int i=0; i<a; i++){
//         printf("the marks of %d student is %d\n",i+1,*ptr);
//         ptr++;    // it give the adress of the next block of block of array.
//     }
// }
void printarray(int arr[],int a){   // it states to take ana array  and an integer.
    for (int i=0; i<a; i++){
        printf("the marks of %d student is %d\n",i+1,arr[i]);
                }
}
int main()
{
int arra[]={4,42,24,24,29,56,123};
printarray(arra,7);
return 0;
}