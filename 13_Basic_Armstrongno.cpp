#include<iostream>
#include<math.h>
using namespace std;

int len(int n){
    int count =0;
    while(n>0){
        count++;
        n = n / 10;
        
        

    }
    return count;
}

bool Armstrong(int n, int count){
    int ans=0;
    int temp=n;
    while(temp > 0){
        int digit= temp% 10;
        ans= ans + pow(digit, count);
        
        temp = temp/10;

    }
    if(ans==n){
        return true;
        
    }
    return false;

}
 
int main()
{
    int cnt = len(153);
    if(Armstrong(153,cnt)){
        cout<<"Armstrong no.";
    }
    else{
        cout<<"Ghar jaa";
    }
 
    return 0;
}