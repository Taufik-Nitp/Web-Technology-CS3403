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
arr unon(arr a1,arr a2){
         int i=0,j=0,k=0,p,q;
         arr a3;
         a3.A=(int *)malloc(40*sizeof(int));
         while(i<a1.length &&j<a2.length){
             if(a1.A[i]<a2.A[j]){
               a3.A[k++]=a1.A[i++];
             }
             else if(a1.A[i]>a2.A[j]){
                 a3.A[k++]=a2.A[j++];
             }
             else{
                 p=i,q=j;

                 a3.A[k++]=a1.A[i];
                 while(a1.A[p]==a1.A[p+1]){
                     i++;
                 }
                 while(a2.A[q]==a2.A[q+1]){
                 j++;
                 }
                     
             }
         }  
         for( ;i<a1.length;i++){
             a3.A[k++]=a1.A[i];
         }     
              for( ;j<a2.length;j++){
             a3.A[k++]=a2.A[j];
         } 
         a3.length=k;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
           return a3;
}
int main()
{
    arr a1,a2,a3;
    initial(&a1);
    initial(&a2);
    a3=unon(a1,a2);
    display(&a3);

return 0;
}