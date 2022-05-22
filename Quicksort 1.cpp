#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,left=0,right=0,equ=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pivot=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<pivot)
            left++;
        else if(arr[i]>pivot)
            right++;
        else
            equ++;
    }
    int result[left+equ+right];
    int left_arr[left],right_arr[right],equ_arr[equ];
    left=0,right=0,equ=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==pivot)
        {
            equ_arr[equ]=arr[i];
            equ++;
        }
        else if(arr[i]<pivot)
        {
            left_arr[left]=arr[i];
            left++;
        }
        else
        {
            right_arr[right]=arr[i];
            right++;
        }
    }
    for(int i=0; i<left; i++)
    {
        cout << left_arr[i] << ' ';
    }
    for(int i=0; i<equ; i++)
    {
        cout << equ_arr[i] << ' ';
    }
    for(int i=0; i<right; i++)
    {
        cout << right_arr[i] << ' ';
    }
    return 0;
}

