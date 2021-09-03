#include<iostream>
using namespace std;
#include<stdlib.h>
#include<bits/stdc++.h>

int birthdayCakeCandles(vector<int> candles) {
    int max=candles[0],count=0;
    for(auto ir=candles.begin();ir<=candles.end();ir++){
        if(*ir>=max)
        max=*ir;
     }
        for(auto ir=candles.begin();ir<=candles.end();ir++){
        if(*ir==max)
        count++;
     }
     return count;
}
int main(){
vector<int> v={44 ,53 ,31 ,27, 77, 60, 66, 77, 26, 36};
int a=birthdayCakeCandles(v);
cout<<a;

return 0;
}