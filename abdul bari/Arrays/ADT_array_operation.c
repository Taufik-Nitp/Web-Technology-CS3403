#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,lenght,*arr;
scanf("%d",&size);
arr=(int*)malloc(size*sizeof(int));
scanf("%d",&arr[0]);
printf("%d",arr[0]);
return 0;
}