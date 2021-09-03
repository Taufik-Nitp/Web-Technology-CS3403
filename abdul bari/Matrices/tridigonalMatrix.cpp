#include<iostream>
using namespace std;

class tdmatrix
{                           
    private:
    int  n;
    int  *a;
    public:
    tdmatrix(){
      int n=3;
      a=new int[7];
    }
    tdmatrix(int n){
       this->n=n;
       a= new int [3*(n-2)];
    }
    void set(tdmatrix *m,int i,int j,int val){
            if(i-j==-1){     // mapping of upper diagonal matrix 
                m->a[2*i-j]=val;
            }
            else if(i-j==0){   // mapping of diagonal matrix 
                  m->a[n+i-2]=val;
            }
            else if(i-j==1){    // mapping of lower diagonal matrix
                 m->a[2*n +i-3]=val;
            }
    }
     int get(tdmatrix m, int i,int j){
        if(i-j==-1){
               return m.a[2*i-j];
            }
            else if(i-j==0){
                 return m.a[n+i-2];
            }
            else if(i-j==1){
                return  m.a[2*n +i-3];
            }
         return 0;
     }
     void display (tdmatrix m){
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
                 if(i-j>=-1 && i-j<=1){
                    //  cout<<m.a[i*(i-1)/2 +j-1]<<" ";
                    cout<<get(m,i,j)<<" ";
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
tdmatrix m(n);
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