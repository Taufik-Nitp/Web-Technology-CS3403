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


 struct sparse add(struct sparse s1,struct sparse s2){
     struct sparse s3;
     s3.m=s1.m;
     s3.n=s1.n;
     s3.num=s1.num+s2.num;
     s3.ele= (struct element*)malloc(s3.num*sizeof(struct element));
     int i=0,j=0,k=0;
     while(i<=s1.num&& j<=s2.num){
         if(s1.ele[i].i<s2.ele[j].i){
             s3.ele[k++]=s1.ele[i++];
         }
         else if(s1.ele[i].i>s2.ele[i].i){
             s3.ele[k++]=s2.ele[j++];
         }
         else {
             if(s1.ele[i].j<s2.ele[i].j){
                   s3.ele[k++]=s1.ele[i++];
             }
             else if(s1.ele[i].j>s2.ele[i].j){
                    s3.ele[k++]=s2.ele[j++];
             }
             else{
                 s3.ele[k].i=s1.ele[i].i;
                 s3.ele[k].j=s1.ele[k].j;
                 s3.ele[k++].x=s1.ele[i++].x +s2.ele[j++].x;
            
             }
         }
     }
         for(;i<s1.num;i++)s3.ele[k++]=s1.ele[i];
         for(;j<s2.num;j++)s3.ele[k++]=s2.ele[j];
         s3.num=k;
         return s3;
 }
int main(){
    
  struct sparse s1;
  create(&s1);

      
  struct sparse s2;
  create(&s2);

  struct sparse s3;

  s3=add(s1,s2);
  display(s3);
return 0;
}  