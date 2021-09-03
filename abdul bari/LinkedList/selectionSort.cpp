#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_que<int>
#define pqs             priority_que<int.vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define sp(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x;cin>>x;while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;

void swap(int *p,int *q){
    int temp= *p;
    *p=*q;
    *q=temp;
}
int main(){
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n;i++){
    
    for(int j=i+1;j<n;j++){
        if(a[j]<a[i]){
            swap(a[i],a[j]);
        }
    }
  }


for(int i=0;i<n;i++){
    cout<<a[i]<<" ";



}



    return 0;

}