#include<iostream>
using namespace std;

int main()
{
    int n,i,k=1,num=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }        
        for(int j=1;j<=k;j++)
        {
            cout<<num;
            num--;
        }
        k+=2;
        num=k;
        cout<<endl;
    }    
       return 0;
}