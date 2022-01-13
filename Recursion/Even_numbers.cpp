#include<iostream>
using namespace std;

void even(int start,int n)
{
    if(start>n)
    return;
    cout<<start<<" ";
    even(start+2,n);

} 
int main()
{
    int n,start=2;
    cin>>n;
    even(start,n);
    
}
