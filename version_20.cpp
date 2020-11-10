//longest arithmetic subarray
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n Enter the limit of the array: ";
    cin>>n;
    int a[n];
    cout<<"\n Enter elements to the array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int pd=a[1]-a[0], ans=2, curr=2, j=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        j++;
        ans=max(ans,curr);
    }
    cout<<ans;
    return 0;
}