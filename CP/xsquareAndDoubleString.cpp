#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
int arr[n];
int h[n]={0};
bool av=false;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(k-arr[i]>=0){
    h[k-arr[i]]++;

    }
    if(h[arr[i]]>0){
        av=true;

        
    }
}
if(av){
    cout<<"Yes";
}
else{
    cout<<"No";
}
return 0;
