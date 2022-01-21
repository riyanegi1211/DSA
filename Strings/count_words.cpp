#include<bits/stdc++.h>
using namespace std;

void count(string str)
{
    int n=str.length();
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(str[i]==32 || str[i]==9 || str[i]==10)
        {
            count++;
        }
    }
    cout<<count;
} 

int main()
{
    string str;
    getline(cin,str);
    count(str);
    return 0;
}