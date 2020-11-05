#include<iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=0, x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=(y*x);
        x*=2;
        n=n/10;

    }
    return ans;
    
}
int main()
{
    int n;
    cout<<"\n enter a binary number: ";
    cin>>n;
    cout<<"entered number in decimal system: "
        <<binaryToDecimal(n);
    return 0;
}