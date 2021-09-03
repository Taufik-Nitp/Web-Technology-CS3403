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
        p->next=NULL;

    }
      

}
void dispay(struct node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

int length(struct node *p){
    int ct=0;
    while(p!=NULL){
        ct++;
        p=p->next;
    }
    return ct;
}

 void insert(struct node *p,int index,int val){
     
     if(index<0|| index>length(p)){
         return;
     }
     
     if(index==0){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->prev=NULL;
        temp->next=head;
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
        head=p->next;
        head->prev=NULL;
        
        
     }
     else{
         for(int i=0;i<index;i++){
             
             p=p->next;
         }
         if(p->next==NULL){
             
             p->prev->next=NULL;
         }
         else{
         p->prev->next=p->next;
         p->next->prev=p->prev;
         }
         
         
     }
 }
 void reverse(struct node *p){
     struct node*temp=(struct node*)malloc(sizeof(struct node));
    //  while(p->next!=NULL){
    //  temp=p->next;

    //  p->next=p->prev;
    //  p->prev=temp;
    //  p=temp;
    
    //  }
    //       p->next=p->prev;
    //   p->prev=NULL;
    //   head=p;
    
////// sir ka solution///////

    while(p!=NULL){
     temp=p->next;

     p->next=p->prev;
     p->prev=temp;
     p=temp;
      if(p!=NULL&&p->next==NULL){    ///here ordrer inside the if statement matters .reversing the order not reverse the dll
         head=p;
      }
     }
         

 }

int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    head= (struct node*)malloc(sizeof(struct node));
    create(head,a,10);
    insert(head,6,44);
 
    removed(head,6);
    // reverse(head);
    
    dispay(head);

return 0;
}