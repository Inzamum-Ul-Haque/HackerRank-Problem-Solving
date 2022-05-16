#include<bits/stdc++.h>
using namespace std;

string checkIfStringMatches(string s)
{
    string str="hackerrank";
    if(s.length()<str.length())
    {
        return "NO";
    }

    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == str[j])
        {
            j++;
        }
    }
    if(j == str.length())
        return "YES";
    else
        return "NO";
}

int main()
{
    string s;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>s;
        cout<<checkIfStringMatches(s)<<endl;
    }
    return 0;
}
