#include<iostream>
using namespace std;

class ltmatrix{ // using row major mapping 
    private:
    int  n;
    int  *a;
    public:
    ltmatrix(){
      int n=3;
      a=new int[3*2];
    }
    ltmatrix(int n){
       this->n=n;
       a= new int [n*(n+1)/2];
    }
    void set(ltmatrix *m,int i,int j,int val){
            if(i>=j){
                m->a[i*(i-1)/2 +j-1]=val;
            }
    }
     int get(ltmatrix m, int i,int j){
         if(i>=j){

         return  m.a[i*(i-1)/2 +j-1];
         }
         return 0;
     }
     void display (ltmatrix m){
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
                 if(i>=j){
                     cout<<m.a[i*(i-1)/2 +j-1]<<" ";
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
ltmatrix m(n);
int x;
m.set(&m,1,1,3);
for(int i=1;i<=n;i++){      /// you have to give input in matrix format
    for(int j=1;j<=n;j++){
     cin>>x;
     m.set(&m,i,j,x);
    }
}

cout<<endl;
m.display(m);



return 0;
}