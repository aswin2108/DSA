#include<iostream>
using namespace std;
int linearSearch(int array[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
        return i;
        }
    }
    return -1;
}
int main()
{
    cout<<"\n Linear Search!!!!";
    int key,n;
    cout<<"\n Enter the limit of the array: ";
    cin>>n;
    int array[n];
    cout<<"\n Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>array[i];
    cout<<"\n number to be searched: ";
    cin>>key;
    cout<<"\n\n the index in which the number is present is: "<<linearSearch(array,n,key);
    return 0;


}