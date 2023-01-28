#include<iostream>
using namespace std;

int hcf1(int a, int b){

    int hcfactor=1;
    for(int i=1;      i<=a   ||     i<=b ;      i++ ){
        if(a % i==0 and b % i==0){
            hcfactor = i; // Obviously at the end of the loop, the factor will be highest since loop running seuentially from 1
        }
        
    }
    return hcfactor;
}

// --------------------------------------------------------------------
//Repeated subtraction

int hcf2(int a, int b){
    while(a != b){
        if(a>b){
            a= a-b;
        }
        else{
            b =b-a;
        }
    }
    return a;
}
///////////////////////////////////////////////////////////////////////////////////////
// Recursive 
int hcf3(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return hcf3(b, a % b);//---------------- VERY MAIN LINE
    }
    //THE WHOLE FUNCTION CAN BE WRITTEN IN ONE LINE
    // return b==0 ? a : hcf3(b, a%b);
}

 
int main()
{
    cout<< hcf3(12,20);

 
    return 0;
}