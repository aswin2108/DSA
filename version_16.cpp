#include<iostream>
using namespace std;
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"\n The sorted array: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<"  ";
  
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
    selectionSort(a,limit);
    return 0;
}
