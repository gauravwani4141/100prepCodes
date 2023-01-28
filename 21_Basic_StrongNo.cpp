#include<iostream>
using namespace std;
// Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.

// For Example: 145 
// 145 = 1! + 4! + 5! =  145


int factorial(int n){
    int ans=1;
    for(int i=1; i<=n ; i++){
        ans = ans * i;
        
    }
    return ans;
}
bool strongno(int n){
    int ans = 0;
    int temp = n;//HERE IF YOU DONT USE TEMP, THEN THE WHILE LOOP WILL EVENTUALLY REDUCE THE INPUT N TO ZERO, AND HENCE ON LINE NO. 30 YOU WONT BE ABLE TO COMPARE ANS WITH N , 
    // IF DIRECTLY PUT N, THEN LINE 30 WILL BE (ANS==0) WHICH IS ALWAYS FALSE
    while(temp != 0 ){
        int digit = temp % 10;
        
        ans= ans + factorial(digit);
        
        temp= temp/10;
    }
    

    if(ans == n){
        return true;
    }
    else{
       
        return false;
    }
    
}
 
int main()
{
    int n=145;
    if(strongno(n)){
        cout<<"It is a strong no"<<endl;
    }
    else{
        cout<<"Not a strong no."<<endl;
    }

 
    return 0;
}
