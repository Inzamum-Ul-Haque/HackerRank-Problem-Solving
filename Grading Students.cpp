#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int grades[n];
    for(int i=0;i<n;i++)
        cin>>grades[i];
    for(int i=0;i<n;i++)
    {
        if(grades[i]<38)
            continue;
        int multiple = (((grades[i]/5)+1)*5);
        if(multiple-grades[i] < 3)
        {
            grades[i] = grades[i]+(multiple-grades[i]);
        }
    }
    for(int i=0;i<n;i++)
        cout<<grades[i]<<endl;
    return 0;
}

