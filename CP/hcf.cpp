#include <iostream>
using namespace std;
unsigned   int fun(unsigned  int a , unsigned  int b){
unsigned  int small,large;
    if(a<b){
        small=a;
        large=b;
    }
    else{
        small=b;
        large=a;
    }
    while((large%small)!=0){
        int temp=small;
        small=large%small;
        large=temp;
    };
    return small;
}

int main() {
	// your code goes here

	
    unsigned int t;
	cin>>t;
	while(t--){
	    unsigned  int n;
	    cin>>n;
	    unsigned  int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        
	    }
	   unsigned  int max=a[0];
	    unsigned int hcf;
	    for(int i=1;i<n;i++){
	        if(a[i]>max){
	            max=a[i];
	        }
	    }
	    
	    for(int i=0;i<n-1;i++){
			if(i==0)
	        hcf=fun(a[i],a[i+1]);
			else{
				hcf=fun(hcf,a[i+1]);
			}
	    }
	    
	    unsigned  int count=0;
	    for(int i=0;i<n;i++){
	        if(hcf!=0){
	        if(a[i]==max){
	            a[i]=hcf;
				count+=1;
	        }
	        else{
	        count+=(a[i]/hcf);
			}
	        }
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}