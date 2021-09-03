#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct  element 
{
    int i;
    int j;
     int x;
};

struct sparse
{
    int m;
    int n;
    int num;
    struct element *ele;
};

void create( struct sparse *s){
printf("enter the number of rows and column and number of non zero element ");
scanf("%d%d%d",&s->m,&s->n,&s->num);
s->ele= (struct element *)malloc((s->num)*sizeof(struct element));
printf("enter the i and j position and the val of the element ");
for(int k=0;k<s->num;k++){
    scanf("%d%d%d",&s->ele[k].i,&s->ele[k].j,&s->ele[k].x);
}
}
 void display(struct sparse s){
     int y=0;
     for(int k=1;k<=s.m;k++){
         for(int p=1;p<=s.n;p++){
               if(k==s.ele[y].i && p==s.ele[y].j){
                   printf("%d ",s.ele[y++].x);
               }  
               else
               printf("0 ");
         }
           printf("\n");
     }
 }
int main(){
    
  struct sparse s;
  create(&s);
  display(s);
return 0;
}