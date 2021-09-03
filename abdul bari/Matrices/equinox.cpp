#include <iostream>
using namespace std;

int main() {
	// your code goes here       /*2

	int t;
	cin>>t;
	int n[t],a[t],b[t];
	string res[t];
	
	for(int i=0;i<t;i++){
	    cin>>n[i]>>a[i]>>b[i];
	    int A=0,B=0;
	    for(int j=0;j<n[i];j++){
	        string s;
	       cin>>s;
	       if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X'){
	           A+=a[i];
	       }
	       else{
	           B+=b[i];}
	           
	           if(A>B)
	           res[i]="SARTHAK";
	           else if(A<B)
	           res[i]="ANURADHA";
	           else
	           res[i]="DRAW";
	    }
	}
	
	for(int i=0;i<t;i++){
	    cout<<res[i];
	}

//     4 1 3
// ABBBCDDE
// EARTH
// INDIA
// UUUFFFDDD
// 2 5 7
// SDHHD
// XOXOXOXO*/
	return 0;
}
