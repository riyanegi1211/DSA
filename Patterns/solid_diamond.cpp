#include<iostream>
using namespace std;

int main()
{
    int i,j,n,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<n-i;k++)
        cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
        cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<n-i;k++)
        cout<<" ";
        for(j=1;j<=(2*i)-1;j++)
        cout<<"*";
        cout<<endl;
    }
    
    return 0;
}