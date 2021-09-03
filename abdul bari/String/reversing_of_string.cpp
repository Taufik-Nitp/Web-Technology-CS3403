#include<iostream>
#include<string>
using namespace std;
//by using heap memory


int main(){
char *name;


cout<<"Enter the string ";
gets(name);


int count=0;
for (int i=0;name[i]!='\0';i++){
    count++;
}
int j=count-1;
for(int i=0;i<j;i++,j--){
    char temp;
    temp=name[i];
    name[i]=name[j];
    name[j]=temp;

}

for(int i=0;i<count;i++){
    cout<<name[i];
}

//-------------------------------------------------------------------------
// char *ptr;
// ptr=new char[count];

// for(int i=0;i<count;i++){
//     ptr=&name[i];
//     ptr++;
// }
// ptr--;                                 // its working.
// for (int i=0;i<count;i++)
// {
//     cout<<*ptr;
//     ptr--;
// }
//----------------------------------------------------------------------------
return 0;
}