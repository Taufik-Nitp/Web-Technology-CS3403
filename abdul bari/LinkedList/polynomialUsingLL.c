#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct node{
    int cofficient;
    int exponent;
    struct node *next;
}*head=NULL;
void create(struct node *p){
    int n;
    //    struct node*q=(struct node*)malloc(sizeof(struct node));
    //    q=p;
     printf("enter how many term you want\n");
     scanf("%d",&n);
     printf("enter the coefficient and exponent of each term\n");
     for(int i=0;i<n;i++){
          struct node*temp=(struct node*)malloc(sizeof(struct node));
          int coff,expo;
          scanf("%d%d",&coff,&expo);
          temp->cofficient=coff;
          temp->exponent=expo;
          if(head==NULL){
              temp->next=NULL;
              head=temp;
              p=head;
          }else{
              temp->next=NULL;
              p->next=temp;
              p=p->next;
          }

      
          
     }
}

void display(struct node *p){
    while(p){
        printf("%dX^%d + ",p->cofficient,p->exponent);
        p=p->next;
    }
}

void evaluate(struct node *p,int x){
    int sum=0;
    while(p){
         sum+= p->cofficient*pow(x,p->exponent);
         p=p->next;
    }
    printf("The value of the poynomial expression is %d\n",sum);
}

int main(){
    create(head);
   display(head);
   evaluate(head,1);
return 0;
}