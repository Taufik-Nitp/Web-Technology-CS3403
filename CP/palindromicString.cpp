#include<bits/stdc++.h>
using namespace std;

int main(){
string str;
cin>>str;
bool lower=true;
int count=0;
for(int i=0;i<str.length();i++){
    if(str[i]<97||str[i]>122){
       lower=false;
       break;
    }

}
if(lower){
for(int i=0;i<str.length()/2;i++){
    if(str[i]!=str[str.length()-1-i]){
    cout<<"NO";
    count++;
    break;}
}
if(count==0)
cout<<"YES";
}


// string s="TAUFIK ALI";
// string s2="sona mona";
// s.swap(s2);
// cout<<s;
// cout<<s2;



return 0;
}