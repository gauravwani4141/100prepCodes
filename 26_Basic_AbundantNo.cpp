// The sum of these factors  is greater than 12 
// So it is an Abundant number

#include<iostream>
#include<math.h>
using namespace std;

bool abundantNo(int n){
    int ans = 0;
    for(int i=1 ; i<=sqrt(n); i++){
        if(n % i ==0){
            if(n/i==i){
                ans = ans + i;
                cout<<i<<" ";
            }
            else{
                ans = ans + n/i + i ;
                cout<<n/i<<" "<<i<<" ";
            }

        }
    }
    ans = ans - n;
    return (ans>12); //Conditon of abundancy
}
 
int main()
{
    if(abundantNo(12)){
        cout<<"***";
    }
    else{
        cout<<"xxx";
    }
    
    return 0;
}