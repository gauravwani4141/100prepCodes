#include<iostream>
using namespace std;
//If any confusion look at previous question
void Decimal2Octal(int num){
    int octalarr[32];
    int i=0;
    while(num > 0){
        octalarr[i] = num % 8;
        num = num/8;
        i++;
    }
    for(int j=i-1 ; j>=0 ; j--){
        cout<< octalarr[j];
    }
}

int Decimal2Octal2(int num){
    int i = 1;
    int octalnum= 0;

    while(num>0){
        int rem = num % 8;
        num = num/8;
        octalnum = octalnum + rem * i ; //This will form number now
        i = i * 10;

    }
    return octalnum;
}


 
int main()
{
    Decimal2Octal(148);

    cout<<endl;
    cout<<Decimal2Octal2(148);
    
 
    return 0;
}