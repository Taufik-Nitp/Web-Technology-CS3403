#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct term{
    int coeff;
    int expo;
};
struct poly{
    int num;
    struct term *ele;
  
};
void create(struct poly *p){
    printf("entter the number of terms in polynomial");
    scanf("%d",&p->num);
    p->ele=(struct term*)malloc(p->num*sizeof(struct term));
    printf("enter the coeff and then expo of each term");
    for(int i=0;i<p->num;i++){
        scanf("%d%d",&p->ele[i].coeff,&p->ele[i].expo);
    }
}
int val(struct poly p,int x){
    int sum=0;
    for(int i=0;i<p.num;i++){
        sum+= (p.ele[i].coeff)*pow(x,p.ele[i].expo);
    }
    return sum;
}
struct poly  add( struct poly p1,  struct poly p2){
struct poly p3;
p3.num=p1.num+p2.num;
int i=0,j=0,k=0;
while(i<p1.num&j<p2.num){
    if(p1.ele[i].expo>p2.ele[j].expo){
        p3.ele[k++]=p1.ele[i++];
    }
    else if(p1.ele[i].expo<p2.ele[j].expo){
        p3.ele[k++]=p2.ele[j++];
    }
    else{
        p3.ele[k].expo=p1.ele[i].expo;
        p3.ele[k++].coeff=p1.ele[i++].coeff+p2.ele[j++].coeff;
    }
}
for(;i<p1.num;i++){
    p3.ele[k++]=p1.ele[i];
}

for(;j<p2.num;j++){
    p3.ele[k++]=p2.ele[j];
}
p3.num=k;
return p3;
}

int main(){
struct poly p1,p2,p3;
create(&p1);
create(&p2);
p3=add(p1,p2);
printf("the value of the sum polynomial is %d",val(p3,3));

return 0;
}