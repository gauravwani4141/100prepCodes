#include<iostream>
using namespace std;

//LINEAR 
int lcm1(int a, int b){

    for (int i = max(a,b);  i<= a *b ;  i++) //CHECK LAST QUESTION BOTH ARE DIFFERENT
    {
        if( i % a==0 && i % b == 0)
        {
            return i;
        }
    }
   
}
// --------------------------------------------------------------------------------
//Using formula of LCM THAT DEPENDS ON HCF
//LCM= (NUM1 * NUM2 )/hcf ;
int hcf(int a, int b){
    return b==0 ? a : hcf(b, a%b);
}
int lcm2(int a, int b){
    return (a * b)/hcf(a,b); //THIS CALLS ANOTHER FUNCTION
}
    
 
int main()
{
    cout<< lcm2(12,14);
 
    return 0;
}