#include<iostream>
using namespace std;

void odd(int start,int n)
{
    if(start>n)
    return;
    cout<<start<<" ";
    odd(start+2,n);

} 
int main()
{
    int n,start=1;
    cin>>n;
    odd(start,n);
    
}
