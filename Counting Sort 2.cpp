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
        if(freq_arr[i] == 0)
            continue;
        else
            while(freq_arr[i]--)
            {
                cout<<i<<' ';
            }
    }
    return 0;
}

