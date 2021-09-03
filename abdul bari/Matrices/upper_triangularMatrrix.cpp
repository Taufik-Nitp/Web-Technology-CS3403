#include<iostream>
using namespace std;

class upmatrix{  //usin row major mapping 
    private:
    int  n;
    int  *a;
    public:
    upmatrix(){
      int n=3;
      a=new int[3*2];
    }
    upmatrix(int n){
       this->n=n;
       a= new int [n*(n+1)/2];
    }
    void set(upmatrix *m,int i,int j,int val){
            if(i<=j){
                m->a[n*(i-1) - ((i-2)*(i-1)/2) + (j-i-1)]=val;
            }
    }
     int get(upmatrix m, int i,int j){
         if(i<=j){

         return  m.a[n*(i-1) - ((i-2)*(i-1)/2) + (j-i-1)];
         }
         return 0;
     }
     void display (upmatrix m){
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
                 if(i<=j){
                     cout<<m.a[n*(i-1) - ((i-2)*(i-1)/2) + (j-i-1)]<<" ";
                 }
                 else
                 cout<<'0'<<" ";
             }
             cout<<endl;
         }

         }

};

int main(){
    int n;
    cout<<"enter the dimension";
    cin>>n;
upmatrix m(n);
int x;
// m.set(&m,1,1,3);
for(int i=1;i<=n;i++){          /// you have to give input in matrix format
    for(int j=1;j<=n;j++){
     cin>>x;
     m.set(&m,i,j,x);
    }
}

cout<<endl;

m.display(m);



return 0;
}