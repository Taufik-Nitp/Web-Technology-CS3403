#include<bits/stdc++.h>
using namespace std;


    string removeChars(string string1, string string2){
     int h[26];
     for(int i=0;i<26;i++){
         h[i]=0;
     }
      char  res[50];
      int k=0;
      for(int i=0;i<string2.length();i++){
          h[string2[i]-97]++;
      }
      
      for(int i=0;i<string1.length();i++){
           if(h[string1[i]-97]==0){
               res[k++]=string1[i];
           }
      }
          res[k]='\0';
           return res;
      }
   

int main(){

string string1="computer";
string string2="cat";
cout<<removeChars(string1,string2);


return 0;

}