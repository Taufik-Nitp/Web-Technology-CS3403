#include<stdio.h>
int summation( int x );   // this program is solely creatd by me ..
int factorial( int y);
int main()
{
    int x ,y;
printf("write the vlaue upto which you want the summaation\n");
scanf("%d",&x);
printf("write the vlaue for which you want the factorial\n");
scanf("%d",&y);
printf("the value of the summation is %d",summation(x));
printf("the value of the factorial of the above number is %d",factorial(y));
return 0;
}
int summation(int x){
           int i,value;
           for (i=x;i>-1;i-=1){
               if(i==0){
                   value=0;
                   break;  // it is not mandatory here but when we use while loop here then it will be mandatory.
               }
               else
               {
                   value= x+ summation(x-1);
               }
               return value;
           }


}
int factorial(int y){
           int i,values ;
           for (i=y;i>0;i-=1){
               if(i==1){
                   values=1;
                    break;  // it is not mandatory here but when we use while loop here then it will be mandatory.
               }
               else
               {
                   values= y*factorial(y-1);
               }
              return values; 
           }


}