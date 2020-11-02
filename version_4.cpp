#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    bool flag=0;
    cout<<"\n\t\t\tPRIME / NOT PRIME";
    cout<<"\n\t\t Enter number to be checked:";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"\n\t\tNot Prime";
            flag=1;
            break;
        }
    }
        if(flag=0)
        cout<<"\n\t\tPrime ";
        return 0;
    
}