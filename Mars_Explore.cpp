#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,match;
    cin>>str;
    int res=0,tot;
    tot=str.length()/3;
    for(int i=0;i<tot;i++)
    {
        match+="SOS";
    }
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=match[i])
            res++;
    }
    cout<<res;
    return 0;
}
