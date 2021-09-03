#include<stdio.h>
int main()
{
    int num;
    printf("enter the number you want the table in the file:");
scanf("%d",&num);
FILE *tablefile;
tablefile=fopen("table.txt","w");

for (int i=0;i<10;i++){
    fprintf(tablefile,"%d X %d = %d\n",num,i+1,num*(i+1));
}
fclose(tablefile);
return 0;
}