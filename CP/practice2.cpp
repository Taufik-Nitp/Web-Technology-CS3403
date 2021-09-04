#include<bits/stdc++.h>
using namespace std;
int const N=1000;
int arr[N][N];
long long int  sum[N][N];

int main(){
int n;
cin>>n;
sum[0][n]=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>arr[i][j];
        sum[i][j]= arr[i][j]+ sum[i-1][j]+ sum[i][j-1]-sum[i-1][j-1];
             
    }
}
int q;
cin>>q;
while(q--){
int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1];

}


return 0;
}