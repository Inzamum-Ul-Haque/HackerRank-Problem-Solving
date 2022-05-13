#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string pangram = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str;
    char temp;
    int cnt=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if((str[i] >= 'A' && str[i] <='Z') || (str[i] >= 'a' && str[i] <='z'))
        {
            str[i] = toupper(str[i]);
            for(int j=0;j<pangram.length();j++)
            {
                if(pangram[j]==str[i])
                {
                    pangram[j]='0';
                    cnt++;
                    break;
                }
            }
        }
    }
    if(cnt==26)
    {
        cout<<"pangram";
    }
    else
    {
        cout<<"not pangram";
    }
    return 0;
}
