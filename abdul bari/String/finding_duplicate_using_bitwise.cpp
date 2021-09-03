#include<iostream>
using namespace std;   

int main(){
string name;
cout<<"enter the string  ";
getline(cin,name);
int a=0;
int H[26]={0};
int length=name.length();
for(int i=0;i<length;i++){
    int k= name[i]-65;
    a=1;
    a=a<<k;
    if(H[k]==0){
        H[k]=H[k]|a;  
    }
    else if(H[k]&a>1){
          continue;
    }
    else{
          cout<<"the duplicate is "<<name[i]<<endl;
          H[k]++;
    }
}

return 0;
}