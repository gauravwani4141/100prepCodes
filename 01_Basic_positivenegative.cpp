#include<iostream>
using namespace std;

//----------------------------------------------------------------------------------

bool positivenegative(int n){
    if(n<0){
        return 0;
    }
    else{
        return 1;
    }
}
//-------------------------------------------------------------------------------------

void positivenegative2(int n){
    if(n==0){
        cout<<"Number is zero";
    }
    else{
        (n>0)?cout<<"positive" : cout<<"negative";
    }
}
//-------------------------------------------------------------------------------------


 
int main()
{
    int n;
    cin>>n;
    if(positivenegative(n)){
        cout<<"It is a positive number";
    }
    else{
        cout<<"It is a negative number";
    }
    
 
    return 0;
}



/*




*/
