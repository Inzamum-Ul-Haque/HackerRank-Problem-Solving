#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,i,j;
    cin>>N;
    int A[N],rev[N];
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(i=0,j=N-1; i<N && j>=0; i++,j--)
    {
        rev[j]=A[i];
    }
    for(i=0;i<N;i++)
    {
        cout<<rev[i]<<" ";
    }
    return 0;
}
