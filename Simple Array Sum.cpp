#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],arr_sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr_sum+=arr[i];
    }
    cout<<arr_sum;
    return 0;
}
