#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,amstrong=0;
    cout<<"\n\n\t\t\t\t.......Amstrong number.......";
    cout<<"\n\n\t\t\t\tEnter number to be checked: ";
    cin>>n;
    int originalno=n;
    while(n>0)
    {
        int lastdigit=n%10;
        amstrong+=pow(lastdigit,3);
        n=n/10;
    }
    if(amstrong==originalno)
    cout<<"\n\t\t\t\tEntered number is amstrong";
    else
    cout<<"\n\t\t\t\t\tNot amstrong!!!!";
    cout<<"\n\n\t\t\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    return 0;
}