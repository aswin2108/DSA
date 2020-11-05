#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        return false;
    }
    return true;
}
int main()
{
    int a,b;
    cout<<"\n Enter the range:";
    cin>>a>>b;
    cout<<"\n The prime numbers in that range is: ";
    for(int i=a;i<=b;i++)
    if(prime(i))
    cout<<i<<"\t";
    return 0;
}