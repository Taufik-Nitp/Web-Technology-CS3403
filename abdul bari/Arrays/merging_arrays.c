#include<stdio.h>
#include<stdlib.h>
typedef struct array{
    int *A;
    int length;
    int size;

}arr;
void initial(arr *a){
    a->A=(int*)malloc(sizeof(20));
      printf("enter the length of array and elemnts\n");
      scanf("%d",&a->length);
      for(int i=0;i<a->length;i++){
         scanf("%d",&a->A[i]);
      }
}
void display(arr *a){
    printf("The elments in this array are:");
    for(int i=0;i<a->length;i++){
      printf("%d  ",a->A[i]);
    }
}
arr merging(arr a1,arr a2){
      int i=0,j=0,k=0;
      arr a3; 
      a3.A=(int *)malloc(40*sizeof(int));

      while(i<a1.length &&j<a2.length){
          if(a1.A[i]<a2.A[j]){
              a3.A[k++]=a1.A[i++];
          }
          else{
              a3.A[k++]=a2.A[j++];
          }
      }
      for( ;i<a1.length;i++){
          a3.A[k++]=a1.A[i];
      }
      for( ;j<a2.length;j++){
          a3.A[k++]=a2.A[j];
      }
      a3.length=a1.length+a2.length;
      a3.size=40;
      
      return a3;
}


int main()
{
arr a1,a2;
initial(&a1);
initial(&a2);
// display(&a1);
// display(&a2);
arr a4=merging(a1,a2);
display(&a4);
return 0;
}