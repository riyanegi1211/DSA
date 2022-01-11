#include<iostream>
using namespace std;

int main()
{
    int n,i,j,num=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=n;j++)
        {
            if(j==i || j==(n-i)+1)
            cout<<num;
            else
            cout<<" ";
        }
        cout<<endl;
        num++;
    }
    
    return 0;
}