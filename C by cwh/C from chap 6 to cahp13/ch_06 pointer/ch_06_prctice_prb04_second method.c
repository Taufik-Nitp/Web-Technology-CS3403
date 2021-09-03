#include<stdio.h>    // write a program which calculate the sum and average of two numbers .
void calculations(float i,float j, float *sum, float *average);   
                    // Use pointer to  print the average and sum in the main() function.
                  
int main()
{
float i, j,sum,average;
printf("write the value of the numbes\n");
scanf("%f%f",&i,&j);
calculations(i,j,&sum,&average);   // Here it is giving its adress to the function so whatever calculation will done at their adress ithe the calculation function will be stored in the adress of the sum and average.This is called calling by refrence/adress.
printf("The sum of the two numbers is %f\n The average of the two numbers is %f",sum ,average);
return 0;
}
void calculations(float i,float j, float *sum, float *average){
    *sum = i+j;
    *average = *sum/2;
}