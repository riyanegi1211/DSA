#include<bits/stdc++.h>
using namespace std;

char occurrence(string str)
{
    int n=str.length();
    int count[256]={0};
    int max=0;
    char result;
    for(int i=0;i<n;i++)
    {
        count[str[i]]++;
        if(max<count[str[i]])
        {
            max=count[str[i]];
            result=str[i];
        }
    }
    return result;
}
int main()
{
    string str;
    cin>>str;
    char result=occurrence(str);
    cout<<"Maximum occurred character is "<<result;
    return 0;
}