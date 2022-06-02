#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[5];
    long long int min_sum=0,max_sum=0;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    sort(arr, arr+5);
    for(int i=0;i<4;i++)
        min_sum+=arr[i];
    for(int i=1;i<5;i++)
        max_sum+=arr[i];
    cout<<min_sum<<" "<<max_sum;
    return 0;
}

