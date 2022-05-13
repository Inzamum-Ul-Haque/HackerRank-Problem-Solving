#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5],mx,mn;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    mx = arr[0];
    mn = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
        }
        if(arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    cout<<"Maximum Number: "<<mx;
    cout<<"\nMinimum Number: "<<mn;
    return 0;
}
