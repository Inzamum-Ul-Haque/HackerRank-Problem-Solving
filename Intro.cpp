#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,n;
    cin>>v>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v == arr[i])
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
