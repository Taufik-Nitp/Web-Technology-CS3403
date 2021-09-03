#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL;

void create(struct node *p,int a[],int n){
 
    //   head= (struct node*)malloc(sizeof(struct node));  /// this statement can also be done in main method
    p->prev=NULL;
    p->data=a[0];
    for(int i=1;i<n;i++){
        struct node *temp= (struct node*)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->prev=p;
        p->next=temp;
        p=p->next;
        head->prev=p;
        p->next=head;

    }
      

}
void dispay(struct node *p){
   do{
       printf("%d ",p->data);
       p=p->next;
   }while(p!=head);
}

int length(struct node *p){
    int ct=0;
       do{
           ct++;
       p=p->next;
   }while(p!=head);
    return ct;
}

 void insert(struct node *p,int index,int val){
     
     if(index<0|| index>length(p)){
         return;
     }
     
     if(index==0){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->prev=p->prev;
        p->prev->next=temp;
        p->prev=temp;
        temp->next=p;
        head=temp;
     }
     else{
          struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        temp->next=p->next;
        p->next->prev=temp;
        p->next=temp;
        temp->prev=p;
        
     }
 }
 
 void removed(struct node *p,int index){
     if(index<0||index>length(p)){
         return;
     }
     if(index==0){
        p->prev->next=p->next;
        p->next->prev=p->prev;
        head=p->next;
        
        
        
     }
     else{
         for(int i=0;i<index;i++){
             
             p=p->next;
         }
         if(p->next==head){
             
             p->prev->next=head;
         }
         else{
         p->prev->next=p->next;
         p->next->prev=p->prev;
         }
         
         
     }
 }
 void reverse(struct node *p){
     struct node*temp=(struct node*)malloc(sizeof(struct node));

    do{
     temp=p->next;
     p->next=p->prev;
     p->prev=temp;
     p=temp;
     }while(p!=head);
     head=head->next;

 }

int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    head= (struct node*)malloc(sizeof(struct node));
    create(head,a,10);
    // insert(head,4,44);
 
    // removed(head,9);
    reverse(head);
    
    dispay(head);
    printf("taufik ali");

return 0;
}