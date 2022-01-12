#include<iostream>
using namespace std;

void num(int n)
{
    if(n>=1)
    {
        num(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    num(n);
    return 0;
}