#include<iostream>
#include<math.h>

using namespace std;
bool perfectsquare(double n){
    if(n>=0){
        int a = sqrt(n);
        if(a*a==n){
            return true;
            // Line 8 and 9 can be written as-------> return (a*a==n);
        }
        return false;

    }
}
// ----------------------------------------------------------
// Another optimized solution can be found out using ceil and floor concept
 
int main()
{
    if(perfectsquare(12)){
        cout<<"Perfect Square";
    }
    else{
        cout<<"Not";
    }

    
    return 0;
}