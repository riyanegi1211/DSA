#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[],int n)
{
    int temp,j;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        temp=arr[i];
        while(j>-1&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sorting(arr,n);
    return 0;
}