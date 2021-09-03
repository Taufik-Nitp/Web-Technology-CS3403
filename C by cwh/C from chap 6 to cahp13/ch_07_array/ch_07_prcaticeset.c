#include<stdio.h>   // taking the value of the number from an array by using array+n to take the n+1th elememt from an array.
int main()
{
int array[9]={10,9,8,7,6,5,4,3,2};
printf("The value of the third number of the array is %d",*(array+2));  // it states that array+2 denotes the adress of the third elment of array.

return 0;
}