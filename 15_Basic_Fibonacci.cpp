#include<iostream>
using namespace std;
 
int main()
{
    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    int nexterm;

    for(int i=2;i<n;i++){
        nexterm=a+b;
        a=b;
        b=nexterm;
        cout<<nexterm<<" ";

    }
 
    return 0;
}

//--------------------------------------------------------------------------
//FIBONACCI SERIES RECURSION SOLUTION

int fibonacci(int n){
    if(n<2){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }


}
