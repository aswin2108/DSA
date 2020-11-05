#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0,t2=1,next;
    for(int i=0;i<n;i++)
    {
        cout<<t1<<"  ";
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    
}
int main()
{
    int n;
    cout<<"\nEnter the nth term of the sequence: ";
    cin>>n;
    cout<<"\n the n terms of finenacci sequence is: ";
    fib(n);
    return 0;
}
