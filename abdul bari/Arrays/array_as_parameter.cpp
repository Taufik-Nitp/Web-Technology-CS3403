#include<iostream>
using namespace std;
     int*  fun(int n){
       int *ptr;
       ptr=new int[n];
       return ptr;
   }


   	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=0,j=0,k=0;
	    int arr3[m+n];
	    
	    while(i<n && j<m){
	        if(arr1[i]<arr2[j])
	        arr3[k++]=arr1[i++];
	        else if(arr1[i]>arr2[j])
	        arr3[k++]=arr2[j++];
	        else{
	            arr3[k++]=arr2[j++];
	           
	        }
	    }
	    
	        for(;i<n;i++){
	            
	        arr3[k++]=arr1[i];
	        }
	        for(;j<m;j++){
	            
	        arr3[k++]=arr2[j];
	        }
	    
	    
	for(int l=0;l<(m+n);l++){
	    cout<<arr3[l]<<" ";
	}
	cout<<"\n";
	
	}
	

int main(){
// int *p;
// p=fun(5);
// for(int i=0;i<5;i++){
//     p[i]=i;

// }
// // for(int i=0;i<5;i++){
// //    cout<< p[i];

// // }
// cout<<*p;
// p++;
// cout<<*p;
// p++;
// cout<<*p;

int arr1[6]={0,2,4,5,6,7},arr2[1]={1};

merge(arr1,arr2,6,1);
return 0;
}