#include<bits/stdc++.h>
using namespace std;

bool anagram(string str1,string str2)
{
    int n1=str1.length();
    int n2=str2.length();

    if(str1!=str2)
    return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<n1;i++)
    {
        if(str1[i]!=str2[i])
        return false;
        else
        return true;
    }
}

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;

    if(anagram)
    cout<<"Yes it's an anagram";
    else
    cout<<"No it's not an anagram";
    return 0;
}
