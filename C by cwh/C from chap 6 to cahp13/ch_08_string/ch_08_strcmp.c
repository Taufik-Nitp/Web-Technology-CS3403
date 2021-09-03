#include<stdio.h>
#include<string.h>
int main()
{
char *str1={"hello"};//str cmp is used to compare the character of two words. 
char *str2={"hzrry"};
int val=strcmp(str1,str2);// It subtract the ascii value of first differnt char ,if the differnce is poositve then gives 1, -1(negative),0(similar strings)
printf("the value of strcmp is %d",val);  // val is -1
return 0;
}