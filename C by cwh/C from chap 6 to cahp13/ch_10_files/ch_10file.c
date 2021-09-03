#include<stdio.h>
int main()
{
FILE *ptr;
int num=847;
int num2;
// fptr= fopen("generetaed.txt","w");
// fprintf(fptr,"the number is %d\n",num);
// fprintf(fptr,"this writing a file");
ptr = fopen("laptop.txt","r");
fscanf(ptr, "%d" ,&num2);
// fclose(ptr);
printf("the value is %d",num2);
return 0;
}