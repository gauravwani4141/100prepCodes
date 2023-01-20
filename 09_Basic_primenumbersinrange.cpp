#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }
    else if(n==2){
        return true;
    }
    else if(n%2==0){
        return false;
    }
    for(int i=3; i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
int main()
{
    int low=1;
    int high=100;
    for(int i=low;i<=high;i++){
         if(isPrime(i)){
            cout<<i<<" ";
         }
    }
       
    
 
    return 0;
}