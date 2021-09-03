#include <stdio.h>
int maximum(int *arr){
    int max=arr[0];
    int len=(sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<len;i++){
        if(arr[i]>max){
        max=arr[i];
        }
    }
    return max;
}

int main() {
	//code
	int *arr={8,2,7,346,63,37,373,37};
     printf("%d",maximum(arr));
	return 0;
}