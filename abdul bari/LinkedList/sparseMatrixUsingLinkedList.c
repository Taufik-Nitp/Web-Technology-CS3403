
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

    /////////// this program is not working ////////////////////////////

struct node{
    struct node *next;
    int value;
    int column;
};

int main(){

int m, n,total;

printf("enter the order of the matrix and the number of the nonzero element\n");
scanf("%d%d%d",&m,&n,&total);
struct node *a[m];
// 


// struct node **a=(struct node**)malloc(m*sizeof(struct node));
printf("enter the postion and the value of the element\n");
for(int i=0;i<total;i++){
     int row;
     int col;
     int val;
     scanf("%d%d%d",&row,&col,&val);

     struct node *p=(struct node*)malloc(sizeof(struct node));
     struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->column=col;
     temp->value=val;
     if(a[row]==NULL){
       a[row]->next=temp;
       temp->next=NULL;
       p=temp;
     }
      else{
        while(p->next!=NULL){
        p=p->next;
       } 

       p->next=temp;
       temp->next=NULL;
      }


    
      
     
     
}

for(int i=0;i<m;i++){
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p=a[i]->next;
    for(int j=0;j<n;j++){
        if(j==p->column){
            printf("%d ",p->value);
        }
        else printf("0 ");
        p=p->next;
    }
    printf("\n");
}


return 0;
}