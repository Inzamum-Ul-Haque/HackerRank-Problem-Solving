#include<bits/stdc++.h>
#include<string.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n/2;i++)
    {
        int x;
        cin>>x;

        string temp;
        cin>>temp;
        s[x]=s[x]+"-"+" ";
    }
    for(int i=n/2;i<n;i++)
    {
        int x;
        cin>>x;

        string temp;
        cin>>temp;
        s[x]=s[x]+temp+" ";
    }
//    char s[n][11];
//    for(int i=0;i<n;i++)
//    {
//        cin>>x[i]>>s[i];
//        if(i<n/2)
//        {
//            strcpy(s[i],"-");
//        }
//    }
//
//    for(int i=1;i<n;i++)
//    {
//        int key=x[i];
//        int j=i-1;
//        char strkey[11];
//        strcpy(strkey,s[i]);
//        while(key<x[j] && j>=0)
//        {
//            x[j+1]=x[j];
//            strcpy(s[j+1],s[j]);
//            --j;
//        }
//        x[j+1]=key;
//        strcpy(s[j+1],strkey);
//    }

    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }
    return 0;
}
