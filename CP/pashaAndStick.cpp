#include <bits/stdc++.h>
using namespace std;
const int m=1e9+7;

string reverseWord(string str){
    
  //Your code here
  string str1=str;
  for(int i=0;i<=str1.length()/2;i++){
      char temp=str1[i];
      str1[i]=str1[str1.length()-1-i];
      str1[str1.length()-1-i]=temp;
      
  }
  return str1;
}

int main() {
// int n;
// cin>>n;
// int arr[n];
// int pr=1;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// for(int i=0;i<n;i++){
//    pr=(pr*arr[i])%m;
// }
// cout<<pr;

string str="taufikali";
cout<<reverseWord(str);
return 0;
}