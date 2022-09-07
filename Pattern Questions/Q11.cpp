#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int l=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j<<" ";
        }
        for(int l=1;l<=n-i;l++)
        {
            cout<<" h ";
        }
        for(int m=1;m<=n-i;m++)
        {
            cout<<" h ";
        }
       for(int g=i;g>=1;g--)
        {
            cout<<" "<<g<<" ";
        }
        cout<<endl;
    }
    
}