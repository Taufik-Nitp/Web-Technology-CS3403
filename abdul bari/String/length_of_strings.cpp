#include<iostream>
using namespace std;


int main(){
char *name;
cout<<"Enter your name ";
// scanf("%s",name);
gets(name);

int count=0;
for (int i=0;name[i]!='\0';i++){
    count++;
}

cout<<count;

return 0;
}