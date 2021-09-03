#include<stdio.h>
int main()
{
// int row ,column;
// scanf("%d  %d",&row,&column);
// for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//         if(i==0||i==row-1){
//             printf("*");
//         }
//         else{
//             if(j==0 ||j==column-1){
//                 printf("*");
//                    }
//                    else printf(" ");
//         }
//     }
//         printf("\n");
// }
// int row ,col;
// scanf("%d%d",&row,&col);
// for (int i=1;i<=row;i++){
//     for(int j=row;j>i;j--){
//       printf("*");
//     }
//     printf("\n");
// }
 int row=5;
  for(int i=1;i<=row;i++){
      for(int j=-(row+2);j<=row+2;j++){
          if(j>-i&&j<i){
              printf("*");
          }
          else
          printf(" ");
      }
      printf("\n");
      
  }
  for(int i=0;i<3;i++){
      for(int j=-(row+2);j<=row+2;j++){
          if(j>-2&&j<2){
              printf("*");
          }
          else printf(" ");
         }
      printf("\n");
  }
for(int i=-(row-1);i<row-1;i++)printf("*");
  printf("******");
// char s[100],ch;
// scanf("%c\n",&ch);
// scanf("%[^\n]",s);
// printf("%c",ch);
// printf("%s",s);
return 0;
}