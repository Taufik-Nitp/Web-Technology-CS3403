#include<stdio.h>
int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}
int ncr(int n,int r){
    return  fact(n)/(fact(r)*fact(n-r));
}
 int rncr(int n,int r){
     
     if(r==n){
         return 1;
     }
     if(r==0){
         return 1;
     }
    return rncr(n-1,r-1)+rncr(n-1,r);

 }

int main()
{
printf("%d",rncr(5,2));
return 0;
}