#include<iostream>
using namespace std;

int calculator(int a, int b, char ch){
    switch (ch){
        case '+' :
            return (a+b);
            break;
        case '-' :
            return (a-b);
            break;
        case '*' :
            return (a*b);
            break;
        case '/' :
            return (a/b);
            break;
        default:
            return -1;

    }

}
 
int main()
{
    int a;
    cout<<"Enter first number";
    cin>>a;
    int b;
    cout<<"Enter second number";
    cin>>b;
    char ch;
    cout<<"Enter operation";
    cin>>ch;
    cout<< calculator(a,b,ch);
 
    return 0;
}