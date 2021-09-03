#include<stdio.h>
void pattern(int n);   // write a program to print the pattern in which 'n'th lline has 'n' *(asterisk) symbol.
int main()
{
    int n ;
    printf("write the value of n upto which the pattern to be display\n");
    scanf("%d",&n);
     pattern(n);
return 0;
}
void pattern(int n){
    // int i;
    if (n==1){
        printf("*\n");
        return;
    }
    pattern(n-1);
    for( int i=1;i<=((2*n)-1);i++){
        printf("*");
    }
    printf("\n");
       
}