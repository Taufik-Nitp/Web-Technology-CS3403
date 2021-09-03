#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
 node *next;

};


 class stack{
 
 node *top;
    
    public:

stack(){
  // top=new node;
  top=NULL;
}
void push(int val);
int pop();
void display();
};

void stack::push(int val){
      node *newnode=new node;
      newnode->data=val;
      if(newnode==NULL){
         cout<<"stack is full\n";

      }else{
          newnode->data=val;
          newnode->next=top;
          top=newnode;
      }


}
void stack::pop(){

}

void stack::display(){

}



int main(){


return 0;
}