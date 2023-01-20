#include<iostream>
#include<math.h>
using namespace std;

//  2---3---5----7----11
// 1. If n is less than 2 then it is not prime
// 2. If n is 2 then  it is prime
// 3. All even numbers are non-prime
// 4. If number is divisible within its sqrt, then it is non-prime 

bool isprime(int n){

    if(n<2){
        return false;
    }

    else if(n==2){
        return true;
    }

    else if(n % 2 ==0){
        return false;
    }

    for(int i=3;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}

 
int main()
{

 
    return 0;
}