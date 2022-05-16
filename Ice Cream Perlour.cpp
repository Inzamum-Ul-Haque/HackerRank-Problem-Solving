#include<bits/stdc++.h>
using namespace std;

void icecreamParlor()
{
    int m,n,flag=0,i,j;
    cin>>m>>n;
    int cost[n];
    for(i=0;i<n;i++)
    {
        cin>>cost[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(cost[i]+cost[j] == m)
            {
                flag=1;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    cout<<i+1<<" "<<j+1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        icecreamParlor();
    }
    return 0;
}
