#include<iostream>
using namespace std;
    

int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
    

int main()
{
    int n,r;
    
    cout<<"Enter number of people: ";
 
    cin>>n;
    
    cout<<"Enter number of seats: ";
    
    cin>>r;
        
 
    int p = factorial(n)/factorial(n-r); //------------------------------------------------🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥

    cout<<p;

    return 0;
}