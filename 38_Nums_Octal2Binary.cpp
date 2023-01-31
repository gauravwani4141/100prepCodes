#include<iostream>
#include<math.h>
using namespace std;

// Octal ------> Decimal ----->  Binary  

void octal2binary(int num){
    int temp =0;
    int i =0;
    while(num != 0){
        int digit = num % 10;
        num = num /10;

        temp = temp + digit * pow(8,i);
        i++;
    }

    //---------- second part
    long long ans=0;
    int j = 1;
    while(temp != 0){
        int dig = temp % 2;
        temp = temp/2;
        ans = ans + dig * j;
        j = j* 10;

    }
    cout<< ans;
}
 
int main()
{
    octal2binary(366);
 
    return 0;
}