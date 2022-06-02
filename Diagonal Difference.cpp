#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n],left_to_right_sum=0,right_to_left_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                left_to_right_sum+=arr[i][j];
            }
            if(i+j == n-1)
            {
                right_to_left_sum+=arr[i][j];
            }
        }
    }
    cout<<abs(left_to_right_sum-right_to_left_sum);
    return 0;
}
