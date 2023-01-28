#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int hexa2decimal(string hexa){
    int ans=0;
    int index=0;
    int len = hexa.size();

    for(int i= len-1; i>=0; i--)
    { //We have used the number as string or char array and    because of that reason we    are  traversing it from the units place using this for loop...
 
            if(hexa[i]>=0 and hexa[i]<=9){
                int digit = int(hexa[i])- 48;
                //Number start from 48 hence we subtract from 48
                ans = ans + digit  * pow(16,index);
                index++;
                

            }
            else if(hexa[i]>='A' and hexa[i]<='F'){
                int digit = int(hexa[i])-55;
                // This is because the letter A start from 65(ASCII) and hence A=10 (value)
                // To want 10 from 65 we will (65-55). Similarly for B (66-55)
                ans = ans + digit * pow(16, index);
                index++;
            }


    }
    return ans;
}
// ---------------------------------------------------- Another approach STOI 
int main()
{
    string hexa;
    cin>>hexa;
    int ans = stoi(hexa,0,2);
    cout<<ans;
 
    return 0;
}