#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],b[3],ca=0,cb=0;
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            ca++;
        else if(a[i]<b[i])
            cb++;
        else if(a[i]==b[i])
            continue;
    }
    cout<<ca<<" "<<cb;
    return 0;
}
