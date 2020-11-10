#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"\n sorted array: ";
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
    bubblesort(a,limit);
    return 0;
}