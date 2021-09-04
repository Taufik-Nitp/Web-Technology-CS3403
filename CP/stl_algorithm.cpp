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
void cmp(map<int ,multiset<string>> a,map<int ,multiset<string>> b){
   if(a.first!=b.first){
       return a.first>b.first;
   }
}

int main(){
int n;
cin>>n;
map<int ,multiset<string>>m;
while(n--){
    int mark;
    string name;
    cin>>name>>mark;
     
   m[mark].insert(name);
}
sort(m.begin(),m.end(),cmp);

for(auto val:m){
    for(auto name:val.second){
        cout<<name<<" "<<val.first<<endl;
    }

}

    return 0;
}