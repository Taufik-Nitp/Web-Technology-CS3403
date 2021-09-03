#include<stdio.h>
#include<stdlib.h>
typedef struct array{
    int *A;
    int size;
    int length;
}ar;
void initialization(ar *a){   
    printf("enter the length of the array");
     scanf("%d",&a->length);
     for(int i=0;i<a->length;i++){
     scanf("%d",&a->A[i]);
     }

}
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(ar *a){
        
          for(int i=0;i<a->length;i++){
         printf("%d  ",a->A[i]);
     }
}
void apend(ar *a){
int x;
    printf("Enter the number you want to apend");
    scanf("%d",&x);
    a->A[a->length]=x;
    a->length++;
    
}
void insert(ar *a){
    int index,val;
    printf("At which index you want to insert and which number");
    scanf("%d %d",&index,&val);
    if(index>=0 && index<=a->length){
    for(int i=a->length;i>index;i--){
        a->A[i]=a->A[i-1];}
        a->A[index]=val;
        a->length++;
}
}
void delete(ar *a){
      int index;
      printf("Which index you want to delete");
      scanf("%d",&index);
      if(index>=0 &&index<a->length){
      for(int i=index;i<a->length-1;i++){
          a->A[i]=a->A[i+1];
      }
      //a->A[a->length-1]=NULL;
     a->length--;
      }
}
int linearsearch(ar *a){
    int key,found=-1;
    printf("Enter the element you wantto search :");
    scanf("%d",&key);
    for(int i=0;i<a->length;i++){
        if(key==a->A[i]){
        swap(&a->A[i],&a->A[i-1]);
        return i;}
    }
    return -1;
}


   
ar* merging(ar a,ar a2){
     int i,j,k;
    
     ar*a3=(ar*)malloc(sizeof(ar));
     

     i=0,j=0,k=0;
     while(i<a.length && j<a2.length){
         if(a.A[i]<a2.A[j]){
             a3->A[k++]=a.A[i++];
         }
         else a3->A[k++]=a2.A[j++];
     }
     for( ;i<a.length-1;i++){
          a3->A[k++]=a.A[i++];
     }
        for( ;j<8;j++){
          a3->A[k++]=a2.A[j++];
     }
     a3->length=a.length+a2.length;
     a3->size=20;
     return a3;
}


int main(){
    int input;
ar a1,a2;
a1.A=(int *)malloc(20*sizeof(int));
// a2.A=(int *)malloc(20*sizeof(int));
// // a1.length=0;
do{
printf("\n1.For Insert\n");
printf("2.display\n");
printf("3.Delete\n");
printf("4.Initialization\n");
printf("5.Binary Search\n");
printf("Enter the corresponding number to perform\n");
scanf("%d",&input);
    switch (input)
    {
    case 1:
        insert(&a1);
        break;

            case 2:
        display(&a1);
        break;

        case 3:
        delete(&a1);
        break;

          case 4:
        initialization(&a1);
        break;

         case 5:
          printf("%d",linearsearch(&a1));
        break;
       }
}while(input<=5 && input>=1);
return 0;
}
