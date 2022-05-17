#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int i=0,j=1,count=0;
    while(j<n)
    {
        int diff=arr[j]-arr[i];

        if(diff==k)
        {
            count++;
            j++;
        }
        else if(diff>k)
        {
            i++;
        }
        else if(diff<k)
        {
            j++;
        }
    }
    cout<<count;
    return 0;
}
