#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0,left=0;
        int n,cnt=0;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(2*left == sum-A[i])
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                left+=A[i];
            }
            cnt++;
        }
        if(cnt == n)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
