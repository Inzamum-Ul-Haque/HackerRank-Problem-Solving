#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,index;
    int sight[6]= {0};
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sight[arr[i]]+=1;
    }
    int max=0;
    for(int i=1; i<=5; i++)
    {
        if(sight[i]>max)
        {
            max=sight[i];
            index=i;
        }
    }
    cout<<index;
    return 0;
}
