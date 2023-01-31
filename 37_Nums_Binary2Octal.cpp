// Binary----> Decimal------> Octal

#include<iostream>
#include<math.h>
using namespace std;
 


int binary2octal(long long num){
    //Bianry to decimal
    int ans=0;
    int i=0;
    while(num!=0){
        int digit = num % 10;
        
        ans = ans + digit * pow(2,i);
        cout<<ans<<endl;

        num = num/10;
        i++;

    }
    cout<<"decimal is :" << ans <<endl;
    //Decimal to octal
    int arg = ans;
    int j=1;
    int mainans=0;
   
    while(arg !=  0 ){
        int rem = arg % 8;
        arg = arg / 8 ;
        mainans = mainans  + rem * j ;
        j = j * 10;
    }
    return mainans;

}



int main()
{
    cout<< binary2octal(10101);
 
    return 0;
}