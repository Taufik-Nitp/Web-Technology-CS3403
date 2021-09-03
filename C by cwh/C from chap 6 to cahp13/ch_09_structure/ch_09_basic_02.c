#include<stdio.h>
#include<string.h>
struct employee{  //defining struct is basicaly defining a custom datatype.
    int code;      
    float salary;        // here,now employee is a custom datatype just like int,float, char.
    char name[50];
};
int main()
{
    struct employee apple[100];       // array of a struct
     apple[0].code= 198;
     apple[0].salary= 39539.42;
     strcpy(apple[0].name,"taufik");
     
          apple[1].code= 199;
     apple[1].salary= 2253235.42;
     strcpy(apple[1].name,"ashif");

         apple[2].code= 200;
     apple[2].salary= 22534245.42;
     strcpy(apple[2].name,"saif");  //one line entering data
     
        // struct employee apple[3]={201,3523.45,"taushif",202,4543.245,"saif",203,3253.242,"tipu"};
     for(int i=0;i<3;i++){
         printf("the code is: %d\nthe salary is: %f\nname of the employee is :%s\n",apple[i].code,apple[i].salary,apple[i].name);
     }
return 0;
}