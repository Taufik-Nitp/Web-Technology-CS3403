#include<stdio.h>
double e(double x,double n){
    static double val=1;
     if(n==1){
       return  val=val*(x)+1; 
     }
      val = val*(x/n)+1;
      e(x,n-1);
} 


int main()                                                                             
{
double a=e(1,10);
printf("%lf",a);
return 0;
}