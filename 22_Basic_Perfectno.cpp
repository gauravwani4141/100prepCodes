// A perfect number is a number in which the sum of the proper positive divisors/Factors of the number is equal to the number itself.

// For Example: 28
// Divisors : 1 + 2 + 4 + 7 + 14 = 28

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool perfectno(int n){
    int ans = 0;
    // for(int i=1;i<n;i++){
    //     if(n % i == 0){
    //         ans= ans+ i;
    //     }  //A bRUTE FORCE APPROACH
    //}
    //A bRUTE FORCE APPROACH TO FIND DIVISORS
    // -------------------------------

    for (int i=1; i<= sqrt(n); i++){
        if(n % i == 0){
            cout<<"passed"<<i<<endl;
            if(n/i==i){
                ans= ans + i;
            }
            else{
                ans= ans + i + n/i ;            }
        }
        
    }
    ans = ans - n; 
    // a no is also factorof itself, for e.g. 28 factors are(1,28),(2,14),(4,7)
    // factors are 1,2,4.7,14,28 wheras  divisors are 1, 2,4,7 and 14. Not 28.
    //  Hence we remove 28 from ans on  line 32
    if(ans==n){
        return true;
    }
    return false;
}

 
int main()
{
    if(perfectno(28)){
        cout<<"It is perfect no."<<endl;
    }
    else{
        cout<<"not a perfect no."<<endl;
    }

 
    return 0;
}