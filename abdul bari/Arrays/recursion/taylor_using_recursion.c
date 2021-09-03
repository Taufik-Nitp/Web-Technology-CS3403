#include<stdio.h>
double taylor(int x,int n){
    static double p=1,f=1;
    double val;
 
    
    if(n==0){

        return 1;
    }
  
     else
     val= taylor(x,n-1);
      f*=n;
      p*=x;
       return val+ p/f;
}

int main(){
    int x;
double a=taylor(1,10);
printf("%lf",a);
return 0;
}