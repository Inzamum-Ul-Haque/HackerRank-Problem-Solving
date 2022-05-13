#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {12, 24, 56, 3, 42, 20},res;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    if(n%2!=0)
    {
        res = arr[n/2];
    }
    else
    {
        res = double((arr[(n-1)/2]+arr[n/2])/2.0);
    }
    cout<<"\n"<<res;
    return 0;
}
