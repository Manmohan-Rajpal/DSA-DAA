#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        { 
            cout<<" * ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"   ";
        }
        for(int l=1;l<i;l++)
        {
            cout<<"   ";
        }
        for(int m=n;m>=i;m--)
        { 
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<"   ";
        }
        for(int l=1;l<n-i;l++)
        {
            cout<<"   ";
        }
        for(int m=i;m>=0;m--)
        { 
            cout<<" * ";
        }
        cout<<endl;
    }
}