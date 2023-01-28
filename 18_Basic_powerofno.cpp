#include<iostream>
#include<math.h>
using namespace std;

int power(double base, double exp){
    double ans=1;
    for(int i=1;i<=exp;i++){ // Here you mistaken 
        ans=ans * base;
    }
    return ans;
}
int main()
{
    int base=12;
    int expo = 5;
    cout<<"Ans : "<< pow(base, expo);//----------------------------Just predefined function
    cout << "Ans 2 : " << power(12.0, 5.0);//-----------------------User defined function
    return 0;
}