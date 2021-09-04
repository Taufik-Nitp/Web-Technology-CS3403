#include<bits/stdc++.h>
using namespace std;

void display(vector<int > &v){                      // This is pass by refrence hence all the chages appeared in actual vectors .
    cout<<endl<<"size :"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
}

void displayvp(vector< vector <int >> v){                      // This is pass by refrence hence all the chages appeared in actual vectors .
    cout<<"size :"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
      for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
      }
      cout<<endl;
    }
    
    
}

void displaymap(map <int , string> m){
    cout<<endl<<m.size()<<endl;
    for(auto val:m){
        cout<<val.first<<" "<<val.second<<endl;
    }
}

int main(){
// pair<int ,string>p;
// p=make_pair(2,"raju");
// pair<int ,string>&p1=p;

// p1.first=4;
// cout<<p.first<<endl<<p.second;
// cout<<p1.first<<endl<<p1.second;

// pair<int ,string> p[4];                 //  array of pair
// p[0]={4,"taufik"};
// p[2]={2,"sona"};
// p[1]={1,"saif"};
// p[3]={3,"tipu"};

// for(int i=0;i<4;i++){
//     cout<<p[i].first<<" "<<p[i].second<<endl;
// }

// vector<int > v(5,3);
// v.push_back(9);v.push_back(99);
// v.push_back(999);v.push_back(9999);
// display(v);
// display(v);
// display(v);




// vector<pair<int, int>> v;     // vectors of pair

// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     int x;
//     int y;
//     cin>>x>>y;
//     v.push_back({x,y});
// }

// swap(v[0],v[2]);

// displayvp(v);




// int N;
// cin>>N;
// vector<int > v[N];                         /////// array of vectors ////////////
// for(int i=0;i<N;i++)
// {
//    int n;
//    cin>>n;
//    for(int j=0;j<n;j++){
//        int x;
//        cin>>x;
//        v[i].push_back(x);
//    }


// }

// for(int i=0;i<N;i++){
//     display(v[i]);
// }



// vector<vector<int >> v;

// int N;
// cin>>N;
  
//   for(int i=0;i<N;i++){
//     int n;
//     cin>>n;
//        vector<int > a;
//     v.push_back(a);
//     for(int j=0;j<n;j++){
//         int x;
//         cin>>x;
//         v[i].push_back(x);
//     }
    
//   }


// for(int i=0;i<N;i++){
//     display(v[i]);
// }



// vector<vector<int >> v;

// int N;
// cin>>N;
  
//   for(int i=0;i<N;i++){
//     int n;
//     cin>>n;
//        vector<int > a;
//     v.push_back(a);
//     for(int j=0;j<n;j++){
//         int x;
//         cin>>x;
//         v[i].push_back(x);
//     }
    
//   }

// vector<vector<int >>:: iterator it;      // this is iterator for nested vector it cant be used for vector of int .
// for(it=v.begin();it!=v.end();it++){
//     vector<int> :: iterator ip;
//     for(ip=(*it).begin();ip!=(*it).end();ip++){
//         cout<<*ip<<" ";
//     }
//     cout<<endl;
// }





// vector<pair<int ,int> >vp={{1,2},{3,7},{8,9},{5,9}};

// for(pair<int, int> val: vp){            /// here a copy is passed to val

//     cout<<val.first<<" "<<val.second<<endl;
// }



// for(pair<int, int> &val: vp){            /// here the refrence  is passed to val
        
//  val.first++ ;val.second++;
// }

// for(pair<int, int> val: vp){            /// here a copy is passed to val

//     cout<<val.first<<" "<<val.second<<endl;
// }






// vector<pair<int ,int> >vp={{1,2},{3,7},{8,9},{5,9}};

// for(auto &val: vp){            /// her the refrence  is passed to val
//        val.first++;val.second++;
//     cout<<val.first<<" "<<val.second<<endl;
// }

// for(auto val: vp){            /// here a copy is passed to val
       
//     cout<<val.first<<" "<<val.second<<endl;
// }
   
//    for(auto i=0;i<4;i++){             // auto keyword is used for auto detection of datatype of any type of variable ;
//     cout<<vp[i].first<<" "<<vp[i].second<<endl;
//    }






// vector<vector<int >> v;

// int N;
// cin>>N;
  
//   for(int i=0;i<N;i++){
//     int n;
//     cin>>n;
//        vector<int > a;
//     v.push_back(a);
//     for(int j=0;j<n;j++){
//         int x;
//         cin>>x;
//         v[i].push_back(x);
//     }
    
//   }

//   for(auto vv:v){          // use of auto keyword in nested vector to display nested vectors .
//     for(auto vt:vv){
//         cout<<vt<<" ";
//     }      
//     cout<<endl;
//   }

/////////////////////////////////////////////       M A P S   //////////////////////////////////
// map<int , string>m;
// m[1]="taufik ali";      // insertion of an element in map is O(log n) , where n is the size of the map at that time 
// m[3]="saddam hussain"; // if the key datatype is string then the insertion of element is O(s.size*log(n)), because internally it follows red black mechanism it to put it in right position it has to comapre the key with all the existing keys.
// m[4]="tipu";
// m[5]="altaful hoda";
// displaymap(m);

//  auto val=m.find(9);    // .find() gives you the iterator corresponding to the key passed in it and .find() has also O(log(n))
//  // cout<<val->first<<" "val->second<<endl;

//  m.erase(4);            // .erase() can take both key value and also iterator pointing to key.
//  // displaymap(m);
//  if(val!=m.end())
//  m.erase(val);                // it has O(log n)

// m.clear();  // clear all the elemnts of the map

// displaymap(m);




 // int n;
  // cin>>n;
  // map<string,int> m;
  // while (n--){
  //   string s;
  //   cin>>s;
  //   m[s]++;
  // }
  // for(auto val:m){
  //   cout<<val.first<<" "<<val.second<<endl;
  // }





   // unordered_map<string ,int >um;
   // int n;
   // cin>>n;             // complex data type cant be used with unorderd_map because in unordered_map values are stored according to the hash value . And hash value is not defined for the complex data type such as pair ,vector,set,nested container etc.
   // while(n--){
   //  string s;    cin>>s;
   //    um[s]++;
   // }
   // for(auto val:um){
   //  cout<<val.first<<" "<<val.second<<endl;
   // }


   // pair<int ,int  > p1,p2;
   // p1={1,8};/// pairs are compared wrt to the first data
   // p2={3,9};
   //  p1<p2?cout<<"p1<p2":cout<<"p1>p2"; 






//     set<string > s;
//     int n;cin>>n;
//     while(n--){
//         string st;
//         cin>>st ;
//         s.insert(st);
//     }


//     for(auto val:s){
//         cout<<val<<endl;
//     }

// cout<<"size :"<<s.size()<<endl;
//     auto c=s.find("defg");
//     // cout<<endl<<*c<<endl;

//     if(c!=s.end())      // check for valid deletion.
//          s.erase(c);
// cout<<"size :"<<s.size()<<endl;


//     for(auto val:s){
//         cout<<val<<endl;
//     }

    /// unordered set is same as unordered map 





    // multiset<string > ms;
    // int n;
    // cin>>n;

    // while(n--){
    //     string s;
    //     cin>>s;
    //     ms.insert(s);
    // }
   // for(auto val: ms){
   //  cout<<val<<endl;
   // }

// ms.erase("abc");               // it will delete all the abc persent in the multiset
//    for(auto val: ms){
//     cout<<val<<endl;
//    }

//  auto a=ms.find("abc");  // it will find the position of the first abc and delete only one abc on which iterator abc point . 
// if(a!=ms.end())
//     ms.erase(a);

//  for(auto val: ms){
//     cout<<val<<endl;
//    }



return 0;
}
