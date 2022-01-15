#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int start=1;
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << " " << start;
            start = start * (i - k) / (k + 1);
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}