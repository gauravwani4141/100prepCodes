#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    int ans=1;
    for(int i=2; i<=n; i++){
        ans=ans*i;
    }
    return ans;   
}
 
int main()
{
    cout<<factorial(6);
    return 0;
}