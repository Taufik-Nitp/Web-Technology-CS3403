#include <iostream>
using namespace std;
static int k=0;
static char res[10];
static int a[10]={0};

 void rec(string s, int k ){
    if(s[k]!='\0'){
        for(int i=0;s[i]!='\0';i++){
        if(a[i]==0){
          res[k]=s[i];
          a[i]=1;
          
         rec(s,k+1);
          a[i]--;
        }
        }
    

    }
    else{
    //  res[k]='\0';
       cout<<res;
       cout<<endl;
    }

 }


int main() {
	// your code goes here
       cout<<"enter the string ";
       string s;
       cin>>s;
       rec(s,0);
  
	return 0;
}