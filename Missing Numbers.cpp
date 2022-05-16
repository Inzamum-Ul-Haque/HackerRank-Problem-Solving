#include<bits/stdc++.h>
using namespace std;

const int maxn = 10000;
int A[maxn*2+5];

int main()
{
    int n,m,tmp;
    int xmax=-maxn,xmin=maxn;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        A[tmp]--;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>tmp;
        A[tmp]++;
        if(xmax < tmp)
        {
            xmax=tmp;
        }
        if(xmin > tmp)
        {
            xmin = tmp;
        }
    }
    for(int i=xmin;i<=xmax;i++)
    {
        if(A[i]>0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
