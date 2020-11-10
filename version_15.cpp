#include<iostream>
using namespace std;
int binarySearch(int array[], int n, int key)
{
    int s=0,e=n;
    while(s<=n)
    {
        int mid=(s+e)/2;
        if(array[mid]==key)
        return mid;
        else if(key<array[mid])
        e=mid-1;
        else
        s=mid+1;
    }
    return -1;
}
int main()
{
    cout<<"\n Binary Search!!!!";
    int key,n;
    cout<<"\n Enter the limit of the array: ";
    cin>>n;
    int array[n];
    cout<<"\n Enter the elements of the array in ascending order: ";
    for(int i=0;i<n;i++)
    cin>>array[i];
    cout<<"\n number to be searched: ";
    cin>>key;
    cout<<"\n\n the index in which the number is present is: "<<binarySearch(array,n,key);
    return 0;
}