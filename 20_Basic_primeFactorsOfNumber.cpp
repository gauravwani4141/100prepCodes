#include<iostream>
#include<vector>
using namespace std;
//   https://www.youtube.com/watch?v=j8Y1fDgFnsI


void primefactors(int n){  
    // O(N) COMPLEXITY
    vector<int>primefact;
    for(int i=2;i<n;i++){
        while(n % i ==0){
            primefact.push_back(i);
            n=n/i;         
        }

        for (int i : primefact){
            cout<<i<<" ";
        }
    }
}
// --------------------------------------------------------------=============================
void primefactors2(int n){  
    // O(sqrtn) COMPLEXITY
    vector<int>primefact2;
    for(int i=2;i<n;i++){
        while(n % i ==0){
            primefact2.push_back(i);
            n=n/i;         
        }
        if(n>1){ ////////Difference----------------------------------------------
            primefact2.push_back(n);
        }
        for (int i : primefact2){
            cout<<i<<" ";
        }
    }
}
 
int main()
{


 
    return 0;
}