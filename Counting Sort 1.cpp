#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],freq_arr[100]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        freq_arr[arr[i]]++;
    }
    for(int i=0; i<100; i++)
    {
        cout<<freq_arr[i]<<' ';
    }
    return 0;
}
