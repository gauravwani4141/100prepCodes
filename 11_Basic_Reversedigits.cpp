#include<iostream>
using namespace std;

int reversedigits(int n){
    int reverse=0;
    while(n>0){
        int digit=n % 10;                 //<------------------|
                                                           // |-----SOUL OF QUESTION
        reverse = reverse * 10 + digit;   //<----------------|
        n=n/10;
    }
    return reverse;
}
 
int main()
{
    cout<<reversedigits(5409);
 
    return 0;
}