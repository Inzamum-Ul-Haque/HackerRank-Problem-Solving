#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            pos++;
        if(arr[i]<0)
            neg++;
        if(arr[i] == 0)
            zero++;
    }
    cout<<fixed<<setprecision(6)<<(double)pos/n<<endl;
    cout<<fixed<<setprecision(6)<<(double)neg/n<<endl;
    cout<<fixed<<setprecision(6)<<(double)zero/n<<endl;
    return 0;
}

