#include <iostream>
#include<cstdlib>
using namespace std;
int fun(string s,int l){
    int sum=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<i;j++){
            sum=sum+s[j];
            double avg=double(sum/i);
            if(avg>=0.5){
                return 1;
            }
        }
    }
    return 0;
}
int main() {
	// your code goes here
	int n,l;
	cin>>n;
	string s;
	int res[n];
	for(int i=0;i<n;i++){
	    cin>>l;
	    for(int j=0;j<l;j++){
          char a;
          cin>>a;
          if(a==0)
          s[j]='0';
          else if(a==1)
          s[j]='1';
	    }
	    res[i]=fun(s,l);
	    
	}
	
	
	for(int i=0;i<n;i++){
	    if(res[i]==1){
	    cout<<"yes"<<endl;}
	    else
	    {
	        cout<<"no";
	    }
	    
	}

	int x=-9;
	cout<<endl;
	cout<<abs(x);
	return 0;
}
