#include<iostream>
using namespace std;

void staircase(int n) {
    for(int  i=1;i<=n*n;i++){
       static int   j=n;
                                                         /// staircase problem of hackerrank 
                                                         // time complexity is O(n).
        if(i%n>=j){
            cout<<"#";
        }
        else if(i%n==0){
            cout<<"#\n";
            j--;
        }
        
               else{
            cout<<" ";
        }
        
        }
    
}

int main(){
staircase(5);

return 0;
}