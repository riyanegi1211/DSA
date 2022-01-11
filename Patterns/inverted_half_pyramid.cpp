#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        {
            cout<<" ";
        }
        for(k=i;k>0;k--)
        {
            cout<<"*";
        }
    cout<<endl;
    }    
       return 0;
}