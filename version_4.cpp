#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool flag=0;
    cout<<"\nPRIME / NOT PRIME";
    cout<<"\n Enter number to be checked:";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"\nNot Prime";
            flag=1;
            break;
        }
    }
        if(flag==0)
        cout<<"\n\t\tPrime ";
        return 0;
    
}