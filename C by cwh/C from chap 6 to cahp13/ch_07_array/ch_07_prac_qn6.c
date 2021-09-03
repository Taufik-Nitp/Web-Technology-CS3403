#include<stdio.h>//  write a program in which you have to print the multiplication from 2 to desired number and the length of the multiplication is user defined using array.
void function(int a[], int num, int level){     // it works but it print two times consequently.
      for(int i=0;i<num;i++){
          a[i]=level*(i+1);
      }
      for (int i=0;i<num;i++){
          printf("%d x %d = %d\n",level,(i+1),a[i]);
      }
}
int main()
{
    int size1,size2;
    printf("write the value upto which you want multiplication and how far the multiplication should go on\n");
    scanf("%d%d",&size1,&size2);
int a[size1][size2];
for(int j=2;j<size2;j++){
for(int i=0;i<size1;i++){
    function(a[i],size2,j);
}
}
return 0;
}