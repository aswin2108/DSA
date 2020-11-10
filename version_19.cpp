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
   for(int i=0;i<n;i++)
   {
       int sum=0;
       for(int j=i;j<n;j++)
       {
           sum+=a[j];
           cout<<sum<<"  ";
       }
   }
    return 0;
}
