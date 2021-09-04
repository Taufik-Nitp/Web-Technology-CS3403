#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
long long int sum=1ll*n*1ll*(n+1)/2;
if(sum%2==1)
cout<<1;
else
cout<<0;
return 0;
}
