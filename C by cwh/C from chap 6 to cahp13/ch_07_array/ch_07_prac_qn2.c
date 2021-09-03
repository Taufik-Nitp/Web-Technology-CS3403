#include<stdio.h> // write a program to create an array of 10 element and store the multiplication of 5 in it.
int main()
{
int arr[10];
int k;
for (int i=0;i<10;i++){
    arr[i]=5*(i+1);       // giving value to the array.
}
printf("write the number of which you see it's product with five ");
scanf("%d",&k);
printf("It's multipliction with 5 is %d",arr[k-1]);  // taking value from the array .
return 0;
}