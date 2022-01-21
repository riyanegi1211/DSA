#include<bits/stdc++.h>
using namespace std;
void duplicate(string str)
{
    int n=str.length();
    int count[256]={0};
    for(int i=0;i<n;i++)
    {
        if(count[str[i]]==0)
        {
            count[str[i]]++;
            cout<<str[i];
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    duplicate(str);
    return 0;
}