#include<iostream>
using namespace std;


//If  year is divisible by 400 then it is surely a leap year
//Or it should be divisible by 4 and not divisble by 100 at same time

bool leapyear(int year){
    if(year%400==0  || ( year % 100 !=0 && year % 4==0) ) // <<<<<<<<-----------------------
    {
        return true;
    }
    else{
        return false;
    }

}
 
int main()
{
 
    return 0;
}