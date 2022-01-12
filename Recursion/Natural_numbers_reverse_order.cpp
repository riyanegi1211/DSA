#include<iostream>
using namespace std;

int num(int n)
{
    if(n==0)
    return 1;
    else
    cout<<n<<" ";
    return num(n-1);
}

int main()
{
    int n;
    cin>>n;
    num(n);
    return 0;
}