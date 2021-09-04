#include<bits/stdc++.h>
using namespace std;
string check_key(map<string,int> m,string s){
    if(m.find(s)==m.end()){
        return "not present";

    }
    return "present";
}
int main(){
    map<string,int> m;
m.insert({"pasha and stick",290621});
m.insert({"lite universe and everything",290621});
m.insert({"find product",290621});
m.insert({"integer segment dividing",290621});
m.insert({"printing pattern using loop",290621});
m.insert({"reverse a string",290621});
m.insert({"find missing in second array",300721});
m.insert({"gcdq",310721});
m.insert({"palindromic string",290621});
m.insert({"remove character",290621});
m.insert({"xsquare and double string",290621});


int count=1;
for(auto itr=m.begin();itr!=m.end();itr++){
    cout<<count<<". "<<itr->first<<"----------->>"<< itr->second;
    cout<<endl;
    count++;
}

cout<<check_key(m,"gcdq");
cout<<"Total :"<<endl<<m.size();

return 0;
}