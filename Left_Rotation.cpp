#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,temp;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[(i+n-d)%n];
    }
    /*while(d>0)
    {
        temp=a[0];
        for(int i=1;i<=n;i++)
        {
            if(i==n)
            {
                a[i-1]=temp;
            }
            else
            {
                a[i-1]=a[i];
            }
        }
        d--;
    }*/
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
