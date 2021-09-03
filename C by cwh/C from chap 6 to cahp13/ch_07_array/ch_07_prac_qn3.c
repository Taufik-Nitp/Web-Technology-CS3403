#include<stdio.h>  // write a program containing a function which reverse the array passed to it .
void function(int *a){  //it also works when void function(int a[]){
    int temp;
    for (int i=0;i<5 ;i++){
         temp=a[i];          //for every i there will be a temp
         a[i]=a[9-i];
         a[9-i]=temp;
            }
            
           
}
int main()
{
int arr[10];
for (int i=0;i<10;i++){
    arr[i]=7*(i+1);
    }
function(arr);
  for (int i=0;i<10;i++){
         printf("%d\n",arr[i]);}
return 0;
}