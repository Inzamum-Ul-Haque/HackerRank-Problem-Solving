#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h[26];
    for(int i=0;i<26;i++)
    {
        cin>>h[i];
    }
    string word;
    cin>>word;
    int max=0;
    for(int i=0;i<word.length();i++)
    {
        if(h[word.at(i)-97]>max)
        {
            max=h[word.at(i)-97];
        }
    }
    cout<<max*word.length();
    return 0;
}
