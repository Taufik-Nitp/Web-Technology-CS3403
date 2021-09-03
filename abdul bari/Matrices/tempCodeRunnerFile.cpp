#include<iostream>
using namespace std;

class tpmatrix{ 
    private:
    int  n;
    int  *a;
    public:
      tpmatrix(){
      int n=3;
      a=new int[5];
    }
      tpmatrix(int n){
       this->n=n;
       a= new int [2*n-1];
    }
    void set(tpmatrix *m,int i,int j,int val){
            if(i==1){
                m->a[j-1]=val;
            }
            else if(j==1 &&i>1){
              m->a[n+i-2]=val;
            }
    }
     int get(tpmatrix m, int i,int j){
         if(j-i>=0){

         return  m.a[j-i];
         }
         else if(j-i<0){
            return m.a[n-1+i-j];
         }
         
     }
     void display (tpmatrix m){
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
               cout<<get(m,i,j)<<" ";
             }
             cout<<endl;
         }
         }
};

int main(){
    int n;
    cout<<"enter the dimension";
    cin>>n;
tpmatrix m(n);
int x;
m.set(&m,1,1,3);
int i=1 ;  /// you have to give input in matrix format
    for(int j=1;j<=n;j++){
     cin>>x;  
     m.set(&m,i,j,x);
    }
    int j=1;
for(i=2;i<=n;i++){
  cin>>x;
  m.set(&m,i,j,x);
}
cout<<endl;
m.display(m);
return 0;
}