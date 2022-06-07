#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],sales[101]= {0};
    int max=INT_MIN,min=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sales[arr[i]]+=1;
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    int count;
    for(int i=min; i<=max; i++)
    {
        count+=sales[i]/2;
    }
    cout<<count;
    return 0;
}

