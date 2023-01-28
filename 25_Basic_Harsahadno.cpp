// A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.

// For Example : 153
// Sum of digits = 1 + 5 + 3 = 9

// 153is divisible by 9 so 153 is a Harshad Number.
#include<iostream>
using namespace std;

bool nivenNo(int n){
    int ans =0;
    int temp = n; 
    // HERE WE MADE USE OF TEMP because we need to make use of original n, in line 18
    while(temp !=0){
        int digit = temp % 10;
        ans = ans + digit;
        temp = temp/10;
    }
    if(n % ans ==0){
        return true;
    }
    else{
        return false;
    }

}
 
int main()
{
    
 
    return 0;
}