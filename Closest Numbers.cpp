#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=INT_MAX;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=1;i<=n;i++)
    {
        if(abs(arr[i]-arr[i-1]) < min)
        {
            min=abs(arr[i]-arr[i-1]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(abs(arr[i]-arr[i-1]) == min)
        {
            cout<<arr[i-1]<<' '<<arr[i]<<' ';
        }
    }
    return 0;
}


