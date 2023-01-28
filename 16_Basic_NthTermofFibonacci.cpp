#include<iostream>
using namespace std;
// Compare this question with last question ----there is a change

int Fibonacci(int n){
    int a=0;
    int b=1;
    int c;

    if(n==0){
        return a;
    }
    for(int i=2;i <= n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
 
int main()
{
    
    int n;
    cin>>n;
    cout<<"The fibonacci term is :"<<Fibonacci(n);
    return 0; 
}