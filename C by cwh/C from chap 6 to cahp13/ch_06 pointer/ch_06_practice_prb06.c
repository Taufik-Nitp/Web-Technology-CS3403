 #include<stdio.h>
 int multiply( int x);
 int main()
 {
 int a ;
 printf("Write the value of a /n");
 scanf("%d",&a);
multiply(a);  // This is calling by value not calling by refrence, thats why the value remains same after pssing through function multiply.
printf("The value of the a after multiply it by 10 is %d",a);
 return 0;
 }
 int multiply( int x){
    int value ;
    value= x*10;
    return value;
    
 }