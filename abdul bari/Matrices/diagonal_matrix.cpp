#include<iostream>  // wap to set get and display a diagonal matrixd.
using namespace std;

   struct  matrix{
     int n;
     int m [10];
     
     void set(int i,int j,int val){
         m[i-1]=val;
     }
     int get(int i,int j){
         return m[i-1];
     }
     void display(){
         for(int i=1;i<=n;i++){
             for(int j=1;j<=n;j++){
                 if(i==j){
                     cout<<m[i-1]<<' ';
                 }
                 else 
                 cout<< 0<<' ';
             }
             cout<<endl;
         }
     }

   };
int main(){
struct matrix m1;
cin>>m1.n;
m1.set(1,1,3);  m1.set(2,2,4);   m1.set(3,3,5);  m1.set(4,4,6);
m1.get(3,3);
m1.display();
return 0;
}