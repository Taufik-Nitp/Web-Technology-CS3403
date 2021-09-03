#include<stdio.h>
int fib(int n){             //iterative
    int t0=0,t1=1,sum,i;
    if(n<=1)
    return n;
    for (i=2;i<=n;i++){
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}
 
int rfib(int n){    //recursion
    if(n<=1)
    return n;
    return fib(n-1)+fib(n-2);
}
int f[10];

int mfib(int n){    //memoization recursion
  if (n<=1){
  f[n]=n;
  return n;
  }
  else{
      if(f[n-1]==-1)
  f[n-1]=mfib(n-1);
   if(f[n-2]==-1)
 f[n-2]= mfib(n-2);
  return f[n-1]+f[n-2];
  }
}

int main()
{
    for (int i=0;i<10;i++){
        f[i]=-1;
    }
printf("%d\n",mfib(6));
printf("%d",f[5]);
return 0;
}