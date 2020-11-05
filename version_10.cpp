#include<iostream>
using namespace std;
void fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact;
}
int main()
{
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    cout<<"\n Factorial of n is: ";
    fact(n);
    return 0;
}
