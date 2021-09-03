#include<stdio.h>  // write a program to checking a year is leap year or not.
int main()
{
int year;       // LEAP YEAR:Year which is divisble by four but should not divisible by 100 except multiple of 400.
printf("Enter any year\n");    //ex: 1700,1800 1900  is not leap but 2000 is a leap year.
scanf("%d",&year);
if ((year%4==0 &&year%100!=0) ||year%400==0){
 printf("Entered year is a leap year");
}
else
{
    printf("Entered year is not a leap year");
}

return 0;
}