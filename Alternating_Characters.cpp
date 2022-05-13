#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int q;
    cin>>q;
    while(q--)
    {
        int count=0;
        cin>>s;
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
