#include<iostream>
using namespace std;
//Spiral order matrix transversal
int main()
{
    int n,m;
    cout<<"\n Enter the values for n and m: ";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter values to the matrix: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    int r_st=0,r_end=n-1,c_st=0,c_end=m-1;
    while(r_st<=r_end && c_st<=c_end)
    {
        //to print first row
        for(int col=c_st;col<=c_end;col++)
           cout<<a[r_st][col]<<" ";
        //to print last column
        r_st++;
        for(int row=r_st;row<=r_end;row++)
           cout<<a[row][c_end]<<" ";
        //to print last row
        c_end--;
        for(int col=c_end;col>=c_st;col--)
            cout<<a[r_end][col]<<" ";
        //to print first column    
        r_end--;
        for(int row=r_end;row>=r_st;row--)
            cout<<a[row][c_st]<<" ";
        c_st++;
    }
    return 0;
}