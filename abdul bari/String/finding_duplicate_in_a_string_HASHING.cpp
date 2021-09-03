#include<iostream>    //USING HASHING TECHNIQUE.
#include<string>
using namespace std;
void duplicate(string name){
int length = name.length();
int *H=new int [26];
for(int i=0;i<26;i++){
    H[i]=0;
}


for (int i=0;i<length;i++){
     int a= name[i]-65;
     if(H[a]==0){
         H[a]=1;
     }
     else if(H[a]>1)
       continue;
       else{
       cout<<"duplicat character is "<<name[i]<<endl;
       H[a]++;
       }
}

}

int main(){
string name;
cout<<"enter any string in capital letters ";
getline(cin,name);         ///here gets() will not take any input . For reading a string(line) we use getline(cin,string_name)
// cout<<name;                ///But for char *str we can use gets(str) to read a line .
// cout <<name.length();   
// cout <<name.size();     // to find the length of the string.
duplicate(name);
return 0;
}