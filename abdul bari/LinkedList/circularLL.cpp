#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class cirll{
private:

public:

node *head;
cirll(){
    head=new node; 
}
void create(int arr[],int n);
void display();
void rdisplay(node *p);
void remove(node *p,int index);
void insert(node *p, int index, int val);
struct node* get();
};
 void cirll::create(int arr[],int n){
    head->data=arr[0];
    node *p=new node;
    p=head;
    p->next=p;
    for(int i=1;i<n;i++){
     node *temp=new node;
     temp->data=arr[i];
     p->next=temp;
     p=p->next;
     p->next=head;
    }
 }


 void cirll :: display(){
     node *p=head;
       do{
          cout<<p->data<<endl;
          p=p->next;
     } while(p!=head);
     
 }

void cirll::rdisplay(node *p){
    static int flag=0;
   
     if(p!=head||flag==0){
     flag=1;
     cout<<p->data<<endl;
     rdisplay(p->next);
     }
     
}

void cirll::insert(node *p,int index, int val){

     if(index==0){
         
        node *temp;
         temp->data=val;

         if(head==NULL){
             head=temp;
             head->next=head;
         }
      else{
         do{
             p=p->next;
         }while(p->next!=head);

         p->next=temp;
         temp->next=head;
         head=temp;
         
      }
     }
    
    else{

    for(int i=0;i<index;i++){
        p=p->next;
    }

        node *temp =new node;
        temp->data=val;
        temp->next=p->next;
        p->next=temp;
    
    }
       
}
void cirll::remove(node *p,int index){
    if(index==0){
        while(p->next!=head){
            p=p->next;
        }
        p->next=head->next;
        head=head->next;
        
    }
    else{
        for(int i=0;i<index-2;i++){
            p=p->next;
        }
        node *q=new node;
        q=p->next;
        p->next=q->next;
        delete q;
    }
}

int main(){
int arr[]={3,54,6,84,45,88,65};
cirll l1;
l1.create(arr,7);
// l1.display();
// l1.insert(l1.head,2,12);
// l1.insert(l1.head,0,99);
l1.remove(l1.head,0);
l1.rdisplay(l1.head);

// l1.rdisplay(l1.head);

return 0;
}
