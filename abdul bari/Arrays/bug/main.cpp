#include<iostrem>
using namespace std;
int fun(int n){
   if (n>0){
    cout<<n;
    fun(n-1);
   }
};
int main(){
fun(5);
return 0;
}
