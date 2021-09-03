#include<stdio.h>// write a program to take the input of  marks of four student in five exam and then print it.
int main()
{
int marks[4][5];
for (int i=0;i<4;i++){
    for (int j=0;j<5;j++){
        printf("write the value of marks of %d student in %d subject \n",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }
}
for (int i=0;i<4;i++){
    for (int j=0;j<5;j++){
        printf("The value of marks of %d student in %d subject is : %d \n",i+1,j+1,marks[i][j]);
        
    }
}
return 0;
}