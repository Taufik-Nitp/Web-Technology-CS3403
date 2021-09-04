#include<bits/stdc++.h>
using namespace std;
int const  N= 1e5;
int a[N];
int main(){
    int n;
    cin>>n;
    int h[n];
    long long int s=0;
    h[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        h[i]=s;           /// precomputation :- prefix sum 
    }
int q;
cin>> q;
while(q--){
    int l,r;
    cin>>l>>r;

    cout<< h[r]-h[l-1]<<endl;
}

return 0;
}