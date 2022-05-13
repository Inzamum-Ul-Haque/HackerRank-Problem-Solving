#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            cnt++;
        }
    }
    cout<<cnt+1;
    return 0;
}
