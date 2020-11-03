#include<iostream>
using namespace std;
int main()
{
    int n, reverse=0;
    cout<<"\n\n\t\t\t\t\tReverse of a number"
        <<"\n\n\t\t\t\t\tEnter number to be reversed: ";
    cin>>n;
    while(n>0)
    {
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<"\n\n\t\t\t\t\tReverse number is: "<<reverse;
    return 0;
}