#include <iostream>



using namespace std;
int fac(int x){
    int fact=1;
    if(x>0){
     fact=x*fac(x-1);}
    return fact;
}

int main()
{
    int a[]={1,2,3,4,5},sum=0;
    for(int x:a){
        sum=sum+x;
    }
    cout<<sum<<endl;
    cout << "Hello world!" << endl;
    int k=fac(5);
    cout<<k;
    return 0;
}
