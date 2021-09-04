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


vector<int > NGE(vector<int> v){
 
 vector<int >res(v.size());
 stack <int> st;
 for(int i=0;i<v.size();i++){
    while(!st.empty()&&v[i]>v[st.top()]){
        res[st.top()]=i;
        st.pop();
    }
   st.push(i);
 }
  
while(!st.empty()){
    res[st.top()]=-1;
    st.pop();
}

  return res;
}



int main(){
  int n;
  cin>>n;
  vector<int > v;

for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
       v.push_back(x);
}
    
     vector<int> nge = NGE(v);


    for(int i=0;i<n;i++){
            
            if(nge[i]==-1){
               v[nge[i]]=-1;
            }

        cout<<v[i]<<" "<< v[nge[i]]<<endl;
     }


    return 0;
}