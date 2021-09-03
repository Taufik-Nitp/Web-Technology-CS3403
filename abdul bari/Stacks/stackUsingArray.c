#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct stack{
    int size;
    int *s;
    int top;
};
void create(struct stack *st){
    printf("enter the size of the stack\n");
    scanf("%d",&st->size);
    st->s=(int *)malloc(st->size*sizeof(int));
    st->top=-1;
}
void push(struct stack *s,int val){
    if(s->top==s->size-1){
        printf("stack overflow\n");
     
    }
    else{
           s->top++;

        s->s[s->top]=val;
    }
}

void display(struct stack *st){
    
    int i=st->top;
    if(st->top==-1){
        printf("nothing to display!!!! stack is empty\n");
    }
    while(i!=-1){
        printf("%d ",st->s[i]);
        i--;
    }
}
void pop(struct stack *st){
    if(st->top==-1){
        printf("stack underflow!!\n");
    }
    else{
        st->top--;
    }
}

// bool empty(struct stack *st){
//     if(st->top==-1){
//         return true;
//     }
//     else return false;
// }

// bool isfull(struck stack *st){
//     if(st->top==st->size-1){
//         return true;
//     }else return false;
// }

int  peek(struct stack st, int position ){
    if(position<0){
        return -1;
    }else{
  int index=st.top-position+1;
  return st.s[index];}
}

int main(){
       struct stack s1;
       create (&s1);
       push(&s1,3);
       push(&s1,4);
       push(&s1,5);
       push(&s1,6);
      
     
       display(&s1);
      printf("%d",peek(s1,3));

return 0;
}