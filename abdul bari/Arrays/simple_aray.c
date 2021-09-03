#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 int* fun(int a[],int b[]){
    int *ptr,a_count=0,b_count=0;
    ptr=(int*)malloc(2*sizeof(int));
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            a_count++;
        }
        else if(a[i]<b[i])
         b_count++;
    }
    *ptr=a_count;
    ptr++;
    *ptr=b_count;
    
    printf("%d\t",*(--ptr));
    printf("%d",*(++ptr));
        return ptr;
}
int main(){
      int a[3],b[3];
      for (int i=0;i<3;i++){
          scanf("%d",&a[i]);
      }
        for (int i=0;i<3;i++){
          scanf("%d",&b[i]);
      }
   
  int *p= fun(a,b);
   printf("this is after call %d",*(--p));
return 0;
}