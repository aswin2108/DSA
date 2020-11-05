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
    int n;
    cout<<"\n enter value for n: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i)/(ncr(j)*ncr(i-j))<<" ";
        }
        cout<<endl;
    }
    
}