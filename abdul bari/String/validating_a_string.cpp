#include<iostream>
using namespace std;   // wap in c++ in which a string with special character becomes invalid STRING.
int validity(char *name){
int i;
for(i=0;name[i]!='\0';i++){
    if((name[i]>=65 && name[i]<=90)||(name[i]>=97&&name[i]<=122)||(name[i]>=48&&name[i]<=57)){
        continue;
    }
    else
    return 0;
}
return 1;
}

int main(){
    char *name; 
    cout<<"Enter your password";
       gets(name);
   int a = validity(name);
//    a=0?cout<<"valid":cout<<"not valid";
if(a==1)
cout<<"valid";
else
cout<<"not valid";
    


return 0;
}