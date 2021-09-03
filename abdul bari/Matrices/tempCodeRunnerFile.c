#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
// struct element{
//     int i;
//     int j;
//     int x;
// };
// struct sparse{
//     int m;
//     int n;
//     int num;
//     struct element *ele;
//     };

//     void create(struct sparse *s ){
//          printf("Enter the order of the sparse matrix");
//          scanf("%d %d",&s->m,&s->n);
//          printf("Enter the number of nonzero element ");
//          scanf("%d",&s->num);
//          s->ele= (struct element*) malloc( s->num*sizeof(struct element));
//          printf("Enter the index (i and j )of the element and the value of the element ");
//           for(int k=0;k<s->num;k++){
//               scanf("%d %d %d",&s->ele[k].i,&s->ele[k].j,&s->ele[k].x);
//           }
//     }

//     void display(struct sparse s){
//         int k=0;
//         for(int i=1;i<=s.m;i++){
//             for(int j=1;j<=s.n;j++){
//                 if(i==s.ele[k].i && j==s.ele[k].j){
//                     printf("%d ",s.ele[k++].x);
//                 }
//                 else
//                 printf("0 ");
//             }
//             printf("\n");
//         }
//     }
    
// }
int main(){
    // struct sparse m;
    // create(&m);
    // display(m);
// C program to illustrate situation
// where flush(stdin) is required only
// in certain compilers.

	char str[20];
	int i;
	for (i=0; i<2; i++)
	{
		scanf("%s", str);
		printf("%s\n", str);
		fflush(stdin);
	}
	


return 0;
}