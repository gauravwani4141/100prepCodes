#include<iostream>
#include<math.h>
using namespace std;

// (462)8 = 4 * 8^2 + 6 * 8^1 + 2 * 8^0
// 256 + 48 + 2 = (306)10


int octal2decimal(long long n){
    int ans=0;
    int i=0;

    while(n!=0){
        int digit = n % 10;
        ans = ans + digit * pow(8,i);
        i +=1 ;
        n = n/10 ;
    }
    return ans;
}
 
int main()
{
    cout<<octal2decimal(462);
 
    return 0;
}