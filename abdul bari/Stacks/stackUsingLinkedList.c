#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct node{
    int data;
    struct node *next;
}*top=NULL;
void push(struct node *p,int val){
   struct node *temp=(struct node*)malloc(sizeof(struct node));
   if(temp){
       temp->data=val;
       temp->next=top;
       top=temp;
       
   }else{
       printf("Stack overflow!!!");
   }
}
void display(struct node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void pop(struct node * p){
    if(top==NULL){
        printf("stack underflow!!!");
    }else{
        top=top->next;
        free(p);
    }
}

void peak(struct node *p,int position){
     for(int i=1;p!=NULL&&i<position;i++){
         p=p->next;
     }
     printf("%d\n",p->data);
}

void stacktop(struct node *p){

}
int main(){
    push(top,1);
     push(top,2);
      push(top,3);
       push(top,4);
        push(top,5);
         push(top,6);
          display(top);
            pop(top);    pop(top);
                pop(top);
                    pop(top);
                        pop(top);    pop(top);   
                           
             display(top);
            
    
return 0;
}