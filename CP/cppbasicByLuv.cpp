#include<bits/stdc++.h>
using namespace std;


int main(){
// string str1="abcdefghijklmnopqrstuvwxyz";
// int num;
// string s2,s3,s4;

// cin>>num;
// cin.ignore();
// getline(cin,s2);
// getline(cin,s3);
// getline(cin,s4);
// // getline(cin,s2);
// cout<<num;
// cout<<endl<<s2
// cout<<endl<<s3;cout<<endl<<s4;

// int n;
// cout<<n;
// long long int p=1;
// cout<<long(n*n*p);

string s;
for(int i=0;i<50;i++){
    s.push_back('a');   //  .pushback() has time complexity of 1;
}
cout<<endl;
for(int i=0;i<50;i++){
    s=s+'a';                    // it has time complexity of n because every time it read s then add 'a';
}
// cout<<s;
int n=1e5;        // when we declare a variable in function then it's memory get allocated in stacks memory and generally the stack memory is about 8 mb.
                   // but when we declare a variable globally then it's memory get allocated in data segment area which has very high memory limit.
int a[n];
a[n-1]=8;
cout<<a[n-1];
cout<<"taufik aii";

}