#include<iostream>
using namespace std;
// -----------------------------------------------------------------------------------------
int sumofgivenrange(int n,int m){
    int ans= (m*(m+1)/2)-(n*(n+1)/2) + n; //<-------/////////////////////////// formula

    // m * (m + 1) divided 2  - n *(n + 1) divided 2  +  n
    return ans;
}

//------------------------------------------------------------------------------------------

int sumofgivenrange(int n, int m){
    int ans=0;
    for(int i=n;i<=m; i++){
        ans=ans+i;
    }
    return ans;
}
 
 
int main()
{
    cout<<sumofgivenrange(2,5);
 
    return 0;
}