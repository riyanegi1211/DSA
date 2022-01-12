#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<n-j+1;
        }
    cout<<endl;
    }
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<n-j+1;
        }
    cout<<endl;
    }
    return 0;
}