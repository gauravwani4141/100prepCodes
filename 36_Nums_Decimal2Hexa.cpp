#include<iostream>
using namespace std;

void  Decimal2Hexa(int num){
    int i=0;
    char hexaarr[100];
    while(num>0){
        int rem = num % 16;
        if(rem<10){
            hexaarr[i]= rem + 48;
            i++;

        }
        else{
            hexaarr[i] = rem + 55;
            i++;
        }
        num = num / 16;

    }

    for(int j= i-1 ; j>=0 ; j--){
        cout<< hexaarr[j];
    }
}
 
int main()
{
    Decimal2Hexa(1254);
    return 0;
}