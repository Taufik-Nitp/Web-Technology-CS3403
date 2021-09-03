#include<stdio.h>  
#include<stdlib.h>
int*fun(int n){   //we can also use [] instead of*
    int *p;
    p=(int*)malloc(n*sizeof(int));  //allocate memory in heap and assign it to p and then reutrn to main func
    for(int i=0;i<n;i++){
        p[i]=i+1;
    }
    return p;
}
int main()
{
int *a,size;
scanf("%d",&size);
a=fun(size);   // we are getting  an array from a function .
for (int i=0;i<size;i++){
    
    printf("%d\n",a[i]);
}
return 0;
}