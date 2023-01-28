#include<iostream>
#include<math.h>
using namespace std;

// Factors are those numbers that totally divide the number
void findfactors(int n){
    for(int i=1;i<=n;i++){
        if(n % i==0){
            cout<<i<<" ";
        }
    }
}
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// Optimized solution

// We make use of the fact that factors exist in pairs
//If there is a factor i, then there will be also factor n/i
void findfactors2(int n){
    for(int i=1;i<=sqrt(n); i++){
        if(n % i == 0){

            if(n /i == i){
                cout<<i<<" ";
                //This base case to avoid repetition
            }
            else{
                cout<<i<<" "<<n/i<<" ";
                // hence pairs can be  100/1 ==(100,1), (100/2,2)(50,2)
            }
        }
    }
}
 
int main()
{
    findfactors(100);

    findfactors2(100);

    
 
    return 0;
}