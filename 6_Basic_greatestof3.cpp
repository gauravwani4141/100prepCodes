#include<iostream>
using namespace std;

//USING TERNARY OPERATORS
int  greatestof3(int m, int n, int o){

    int temp= m>n ? m : n;
    int result= temp>o ? temp : o ;
    return result;
}

//------------------------------------------------------------------------------------------

//USING MAX FUNCTION
int greatest2of3(int m, int n, int o){

    return max(m,max(o,n));
}


 
int main()
{
    cout<<greatestof3(1000,500,100);
 
    return 0;
}