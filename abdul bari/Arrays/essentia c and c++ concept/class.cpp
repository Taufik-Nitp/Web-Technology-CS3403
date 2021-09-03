#include<iostream>
class rectangle{
    private:
     int length,breadth;
     public:
     void initialization(int a ,int b){
         length=a,breadth=b;
         
     }
     int area(){
         return length*breadth;
     }
     int peri(){
         return 2*(length+breadth);
     }
};
using namespace std;
int main(){
    struct rectangle r1;
    r1.initialization(15,10);
    r1.area();
    r1.peri();
    cout<<r1.area()<<endl<<r1.peri()<<endl;
    string firstname ,lastname;
    cin>> firstname;
    cin>>lastname;
    cout<<firstname<<endl;
    cout<<lastname;
    return 0;
} 