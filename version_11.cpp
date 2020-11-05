#include<iostream>
using namespace std;
int ncr(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    
    return fact;
}
int main()
{
    int n,r;
    float t;
    cout<<"\nEnter value for n and r: ";
    cin>>n>>r;
    t= ncr(n) / (ncr(r)*ncr(n-r));
    cout<<"\n Value of nCr is: "<<t;
    return 0;
}
