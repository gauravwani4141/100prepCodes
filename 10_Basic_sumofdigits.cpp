#include<iostream>
using namespace std;

int SumOfdigits(int n){
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum= sum+ digit;
        n=n/10;

    }
    return sum;
    
}

 
int main()
{
    cout<<SumOfdigits(456);
 
    return 0;
}