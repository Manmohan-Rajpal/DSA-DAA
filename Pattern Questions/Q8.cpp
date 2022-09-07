#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"   ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<" * ";
        }
        for(int l=1;l<n-i;l++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}