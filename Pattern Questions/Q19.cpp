#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int l=1;l<=i;l++)
        {
            cout<<" * ";
        }
        for(int m=n-i;m>=1;m--)
        { 
            cout<<" _ ";
        }
        for(int m=n-i;m>=1;m--)
        { 
            cout<<" _ ";
        }
        for(int l=1;l<=i;l++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<" k ";
        }
        for(int m=0;m<=i-1;m++)
        { 
            cout<<" _ ";
        }
        for(int t=0;t<=i-1;t++)
        { 
            cout<<" _ ";
        }
        for(int j=n-i;j>=1;j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}