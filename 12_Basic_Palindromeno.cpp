#include<iostream>
using namespace std;

//Palindrome numbers are numbers are same even if reversed.

int reverseofDigits(int n){
    int reverse=0;
    while(n>0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n= n/10;


    }
    return reverse;
}

bool palindrome(int n){
    if(n==reverseofDigits(n)){
        return true;
    }
    return false;
}

 
int main()
{

 
    return 0;
}