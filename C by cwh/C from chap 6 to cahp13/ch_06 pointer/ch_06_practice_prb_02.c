#include<stdio.h>        // Write a program having a variable i .Print the adress of i.Pass the variable to a 
void pointerr(int x);    // function aand print it adress . Are the adresses same? why?
int main()             
{                     
 int i;              
  printf("The value of the adress of i is %u\n",&i);
  pointerr(i); 
return 0;
}
void pointerr(int x){
    int i;
    printf("The value of the adress of i after using pointerr function is %u",&i);
}