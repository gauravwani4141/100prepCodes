#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
int getDecimal1(long long num)
{
    int i = 0, decimal= 0;
    while (num!=0)
    {
        int digit = num % 10;
        
        
        decimal += digit * pow(2,i);
        
        
        num /= 10;
        i++;
    }
    return decimal;
}
// ======================================
// Using stoi predefined function

int getDecimal2(string num){  
    //Remember the datatype should be string and not int or long long
    return stoi(num,0,2);
}
 
int main()
{
    long long n=010101;
    cout<<getDecimal1(n);

 
    return 0;
}

