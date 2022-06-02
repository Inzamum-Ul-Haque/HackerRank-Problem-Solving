#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,count;
    cin>>n;
    int candles[n];
    for(int i=0;i<n;i++)
    {
        cin>>candles[i];
        if(max<candles[i])
        {
            max=candles[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(max == candles[i])
            count++;
    }
    cout<<count;
    return 0;
}
