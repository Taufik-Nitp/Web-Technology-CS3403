#include<iostream>
using namespace std;   /// Important program(conceptual)''''''''''';;;;;;;;;;;;''''''''''';;;;;;;;;''''''''';;;;;;;;;

void perm(string s,int k){       // backtracking (brute force) technique.
    static int a[10]={0};
    static  char res[10];
    int i;


    if(k==0&& i==0){
        cout<<s<<endl;
    }
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<"  ";

    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(a[i]==0){
                res[k]=s[i];
                a[i]=1;
                perm(s,k+1);
                a[i]=0;
            }
        }
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void swap (char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void perm1(string s ,int l,int h){      // Swapping technique
    int i;
    if(l==h){
        cout<<s<<" ";
    }
    else{
        for(i=l;i<=h;i++){
            swap(s[l],s[i]);
            perm1(s,l+1,h);
            swap(s[l],s[i]);

        }
    }
}




int main(){
    
string name;
cout<<"enter any string";
getline(cin,name);
int k=name.length();

// perm(name,0);
perm1(name,0,k-1);
 
return 0; 
}