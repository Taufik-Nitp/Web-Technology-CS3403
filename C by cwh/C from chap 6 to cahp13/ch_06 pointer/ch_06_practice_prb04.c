#include <stdio.h> // write a program which calculate the sum and average of two numbers .
                   // Use pointer to  print the average and sum .
void calcultions(float *x, float *y);
int main()
{                                 
    float num1, num2;
    float *j = &num1, *k = &num2;
    printf("write the value of of num1 and num2 respectively\n");
    scanf("%f%f", &num1, &num2);
    calcultions(j,k ); //It will give the adress of variable num1 and num2. j and k can be replaced by &nnum1 &num2.

    return 0;
}
void calcultions(float *x, float *y) 
{ // And here it takes the vlaue of num1 and num2.
    // float sum , average;
    // sum = x+y;
    // average= (x+y)/2;
    printf("the sum of the two number is %f\n The average of the two numbers is %f", *x + *y, (*x + *y) / 2);
}