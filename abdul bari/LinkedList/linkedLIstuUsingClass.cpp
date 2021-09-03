#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class linkedlist{
    private:
    node *first;
public: 
linkedlist(){first=NULL;};
linkedlist(int a[],int n);

void create(int arr[],int n);
void display();
int  length();
int max();
node* search(int index);
void linSOp (int key);
void insertion(int pos,int val);
void insertlast(int val);
void sortedInsertion(int val);
int deleteUsingIndex(int index);
bool isSorted();


};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void linkedlist:: create(int arr[],int n){   // we can also define first pointer inside the ceate mathod ,then we must have return 
                               //  type as struct node* and must return "first " pointer node;

     node *t, *last;
    first=new  struct node;
    first->data=arr[0];
    first->next=NULL;
     last=first;
    for(int i=1;i<n;i++){
    t=new struct node;
    t->data=arr[i];
    t->next=NULL;
    last->next=t;
        last =t;
    }
    
}
/////////////////////////////////////////////////////////////////////////////////////////////
void linkedlist::display(){
      node *p=first;
   while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
  int linkedlist:: length (){
     node *p=first; 
     int count=0;
    while(p!=NULL){
     count++;
     p=p->next;

    }
    return count;
  }
//////////////////////////////////////////////////////////////////////////////////////////////////
    int linkedlist::max(){
       node *p=first; 
      int a=INT_MIN;
      while(p!=NULL){
      if(p->data>a)
      a=p->data;
      p=p->next;
  }
  return a;
  }
  //////////////////////////////////////////////////////////////////////////////////////////////////////////
   node* linkedlist::search(int key){

   node *p=first;
    while(p!=NULL){
        if(p->data==key){
            return p;
        }
        p=p->next;
    }
    return NULL;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

 void linkedlist::linSOp (int key){
      node *p=first;
         node *last;
        
    
        last=p;

        while (p!=NULL){
            
            if(p->data==key){
             last->next=p->next;
             p->next=first;
             first=p;
             
            }
            last=p;
            p=p->next;

        }
        
    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void linkedlist::insertion(int pos,int val){
    node *p=first;
        if(p==0){
            struct node *temp=new struct node;
            temp->data=val;
            temp->next=first;
            first=temp;
        }
        else{
            if(pos<0||pos>length()){
                return ;
            }
            else{
            for(int i=0;i<pos-1&& p;i++){
                p=p->next;
            }
            if(p){
            struct node *temp=new struct node;
            temp->data=val;
            temp->next=p->next;
            p->next=temp;
            }
        }
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////

     node *tail =new struct node;
        

    void linkedlist::insertlast(int val){
        node*p=first;
        if(first==NULL){
            
            struct node *temp= new struct node;
            first=tail=temp;
        temp->next=NULL;
        temp->data=val;
        tail=temp;
        
        }

       else{
        struct node *temp= new struct node;
        temp->next=NULL;
        temp->data=val;
        tail->next=temp;
        tail=temp;
       }
    }

////////////////////////////////////////////////////////////////////////////////////////
 void linkedlist::sortedInsertion(int val){
     node *p=first;
          node *last=new struct node;
     node *temp=new struct node;
       if(first==NULL){
           temp->data=val;
           temp->next=first;
           first=temp;
       }
       else{
        if(val<p->data){
              temp->data=val;
           temp->next=first;
           first=temp;
        }
         while(val>p->data && p->next!=NULL){
             last=p;
             p=p->next;
         }
         
         if(p->next!=NULL){
       temp->data=val;
       last->next=temp;
       temp->next=p;
       }
         
          if(val>p->data&& p->next==NULL){
             temp->data=val;
             p->next=temp;
             temp->next=NULL;
         }
         
         
         if(p->next==NULL){
             temp->data=val;
             last->next=temp;
             temp->next=p;
         }
        
       }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int linkedlist::deleteUsingIndex(int index){
        node *p=first;
         struct node *last=new struct node;
         int x;
         if(index<=0||index>length()){
           return -1;
         }
        if(index==1){
            first=p->next;
             x=p->data;
            delete p;
            return x;
        }
        else{
            for(int i=0;i<index-1;i++){
                last=p;
                p=p->next;
            }
            if(p->next==NULL){
                last->next=NULL;
                x=p->data;
                delete p;
                return x;
            }else
            last->next=p->next;
             x=p->data;
            delete p;
            return x;
        }
      
    }
    ///////////////////////////////////////////////////////////////////////////////////////////
       bool linkedlist::isSorted(){
           node *p=first;

         struct node *last=new struct node;
         last->data=INT_MIN;
         while(p!=NULL){
          if(last->data>p->data){
              return false;}
        last=p;
        p=p->next;
        }
        return true;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////
    /// rest methods are int basic.cpp
int main(){
int arr[]={3,4,16,17,19};
linkedlist l1;
l1.create(arr,5);
// l1.display();

// cout<<endl<<l1.length();
// cout<<endl<<l1.max();
// cout<<endl<<l1.search(4)->data;

// l1.linSOp(7);
// l1.display();

// l1.insertion(3,88);
// l1.display();

// l1.insertlast(4);
// l1.insertlast(43);
// l1.insertlast(45);
// l1.insertlast(48);
// l1.display();

// l1.sortedInsertion(1);
// l1.sortedInsertion(14);
// l1.sortedInsertion(51);
// l1.sortedInsertion(9);
// l1.display();


// l1.deleteUsingIndex(3);
// l1.display();

//   l1.isSorted()?cout<<endl<<"SORTED":cout<<endl<<"NOT SORTED";

return 0;
}