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
         printf("\n%d",a->A[i]);
     }
}
void apend(ar *a){
int x;
    printf("Enter the number you want to add");
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
int binarysearch(ar*a){
    int l=a->A[0],h=a->A[a->length-1],mid,key;
    printf("enter the number to be search");
    scanf("%d",&key);
    while(l<=h){
        mid=(l+h)/2;
        if(key==a->A[mid]){
            return mid;
        }
        else if(key>a->A[mid]){
            l=mid+1;
        }
        else h=mid-1;
    }
    return -1;
}
int rbinarysearch(ar*a,int l,int h,int key){
     int mid;
      if(l<=h){
       mid=(l+h)/2;
       if (a->A[mid]==key)
       return mid;
       else if(key>a->A[mid])
       rbinarysearch(a,mid+1,h,key);
       else
       rbinarysearch(a,l,mid-1,key);
      }
      else{
          return -1;
      }
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


int main()

{
ar a;
a.A=(int *)malloc(10*sizeof(int));
a.size=20;
a.length=0;
initialization(&a);

// ar*a3;
// display(&a);
// apend(&a);
// display(&a);
// insert(&a);
// display(&a);
// delete(&a);
// display(&a);

// printf("By the use of linear search index is: %d",linearsearch(&a));
// display(&a);
// printf("by the use of binary search  index is :%d",binarysearch(&a));
// printf("by the use of recursive binary search index is at :%d",rbinarysearch(&a,0,a.length-1,5));

return 0;
}
