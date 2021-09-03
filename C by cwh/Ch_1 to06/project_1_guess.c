#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
int num ,guess,attempt=1;
srand(time(0));
num= rand()%100+1;

do{
    printf("write your guess number\n");
scanf("%d",& guess);
if (guess>num){
    printf("please give lower value\n");
}
else if( guess<num){
printf("please give a higher value\n");
}
else  {
  printf("the number of attempt is %d",attempt);
}
  attempt++ ;
}

while(guess!=num);


return 0;
}