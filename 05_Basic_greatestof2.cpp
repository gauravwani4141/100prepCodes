#include<iostream>
using namespace std;


//----------------------------------------------------------------------------------
//USING TERNARY OPERATOR

void  greatestoftwo(int m, int n){
    (m>n)? cout<<m : cout<<n;
}
// -------------------------------------------------------------------------------------

//USING BRUTE FORCE APPROACH
//USING MAX() FUNCTION

 
int main()
{
    greatestoftwo(3,4);
 
    return 0;
}