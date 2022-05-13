#include<bits/stdc++.h>
using namespace std;

int main()
{
    int length,count=0;
    cin>>length;
    char s[length];
    for(int i=0;i<length;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<length-2;i++)
    {
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
        {
            s[i+2]='1';
            count++;
        }
    }
    cout<<count;
    return 0;
}
