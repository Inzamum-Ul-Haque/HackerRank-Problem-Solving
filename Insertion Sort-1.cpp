#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int j=n-1;
    int v=arr[j];
    while(v < arr[j-1])
    {
        arr[j]=arr[j-1];
        j--;
        print(arr,n);
    }
    arr[j]=v;
    print(arr,n);
    return 0;
}

