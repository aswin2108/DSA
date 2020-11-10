#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int counter=a[i];
        while(a[j]>counter && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=counter;
    }
    for(int i=0 ;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
int main()
{
    int limit;
    cout<<"\n Enter the limit of the array: ";
    cin>>limit;
    int a[limit];
    cout<<"\n Enter elements to the array: ";
    for(int i=0;i<limit;i++)
    cin>>a[i];
    insertionsort(a,limit);
    return 0;
}
