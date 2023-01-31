#include<iostream>
using namespace std;

void Decimal2binary(int num){
    int arr[32];
    //To store last answer an arr

    int i=0;
    while(num>0){
        arr[i]= num % 2;
        num = num/2;
        i++;
    }
    for(int j=i-1; j>=0 ; j--){ //Here we used i-1 rather than i because in the last while loop i++ have already increamented the values now out of the array so -1 will bring it back to the value
        cout<<arr[j];
    }

    //From this solution we learned that if we want to make use of location we will initialize i outside loop, so next loop can make use of location✔👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀👀🔥

            // ======================================================================================================================

}

long long Decimal2Binary2(int num){

        int i=1;
        long long binary =0;
        
        while(num>0){

            int rem= num % 2;
            num = num/2;
            binary = binary + rem * i ;
            i = i* 10;

            

        }
        return binary;
        
}

 
int main()
{
    Decimal2binary(19);

    cout<<endl;
    
    cout<< Decimal2Binary2(19);
    

    int i=0;


    
 
    return 0;
}