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
int const N=1e9;int const q=100;
void  swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b-temp;
}
void merged(int x[],int y[],int mid,int l,int r){
  int i=l;
  int j=mid+1;
  int k=l;
  while(i<=mid&&j<=r){
    if(  (q-(q/y[i]))*x[i] > (q-(q/y[j]))*x[j]){
     
    }
  }

}
void mergesort(int x[],int y[],int l, int r){
  while(l<r){
 int  mid= (l+r)/2;
  mergesort(x,y,l,mid);
   mergesort(x,y,mid+1,r);
   merged(x,y,mid,l,r);
}
}

int main(){
    ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
w(t){

  int n,m;
  cin>>n>>m;
  int x[m+1],y[m+1];

   x[0]=0; y[0]=0;
   for(int i=1;i<=m;i++){
     cin>>x[i]>>y[i];
    
   }
  // for(int i=1;i<m;i++){
  //   if(   (n-(n/y[i]))*x[i]<(n-(n/y[i+1]))*x[i+1]  ){
  //     swap(x[i],x[i+1]);
  //     swap(y[i],y[i+1]);
  //   }
  // }
  // int am[m+1];
  // for(int j=1;j<=m;j++){
  //   am[j]=(n-(n/y[j]))*x[j];

  // }
  
  // sort(am+1,am+(m+1),greater<int>());

   

  
  ll int res=0;
  int i=1;
while(i<=m){
    int j=y[i];
    res+= (n-(n/j))*x[i];
    n=n/j;
   i++;
}
cout<<res<<endl;

}
 
  return 0;
}