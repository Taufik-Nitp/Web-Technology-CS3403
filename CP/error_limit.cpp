#include<bits/stdc++.h>
using namespace std;
void func(int x){
    cout<<"function invoked for"<<x<<endl;
    if(x==0){
        return;
    }
    func(x-1);
   
}
int main(){

// func(5);
int mx=INT_MAX;
cout<<mx<<endl;
cout<<mx+1<<endl;   // overflow
double a=100000;
double b=100000;
double c=a*b;
cout << fixed<< setprecision(3)<<c<<endl;   /// fixed keyword is used here to print it in number not in scientific notation.
long  long pat='a';
float f=434;
cout<<pat<<endl<<sizeof(pat)<<endl<<sizeof(a)<<endl<<sizeof(f);

return 0;


}