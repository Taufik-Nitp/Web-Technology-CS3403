#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct node{
    char data;
    struct node *next;
}*top=NULL;
void push(struct node *p,char val){
   struct node *temp=(struct node*)malloc(sizeof(struct node));
   if(temp){
       temp->data=val;
       temp->next=top;
       top=temp;
       
   }else{
       printf("Stack overflow!!!");
   }
}
// void display(struct node *p){
//     while(p){
//         printf("%d ",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }
void pop(struct node * p){
    if(top==NULL){
        printf("stack underflow!!!");
    }else{
        top=top->next;
        free(p);
    }
}

// void peak(struct node *p,int position){
//      for(int i=1;p!=NULL&&i<position;i++){
//          p=p->next;
//      }
//      printf("%d\n",p->data);
// }

char stacktop(){
    if(top==NULL){
        printf("stack is empty!!!");
    }else
   return top->data;
}

int  isbalanced(char *e){
    for(int i=0;e[i]!='\0';i++){
        if(e[i]=='('){
            push(top,'(');
        }else if(e[i]=='{'){
            push(top,'{');
        }else if(e[i]=='['){
            push(top,'[');
        }
        
        else if((e[i]==')'&&stacktop()=='(')||(e[i]=='}'&&stacktop()=='{')||(e[i]==']'&&stacktop()=='[')){
             if(top==NULL){
                 return 0;
             }else pop(top);
        }
    }

    if(top==NULL){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    // push(top,1);
    //  push(top,2);
    //   push(top,3);
    //    push(top,4);
    //     push(top,5);
    //      push(top,6);
    //       display(top);
    //         pop(top);    pop(top);
    //             pop(top);
    //                 pop(top);
    //                     pop(top);    pop(top);   
                           
    //          display(top);
            
            char * c="{((a+b)-(c+t))}";
            int a=isbalanced(c);
            printf("%d",a);
    
return 0;
}