#include<bits/stdc++.h>
#include<cstring>
using namespace std;

//bool areEqual(int arr1[],int arr2[])
//{
//    int m = sizeof(arr1)/sizeof(int);
//
//    for(int j=0;j<m;j++)
//    {
//        if(arr1[j] != arr2[j])
//            return false;
//    }
//    return true;
//}

int main()
{
//    int q,j,cnt;
//    cin>>q;
//    string s,s_rev;
//    for(int i=0; i<q; i++)
//    {
//        cin>>s;
//        int s_dec[s.length()],s_dec_rev[s.length()],diff[s.length()-1],diff_rev[s.length()-1];
//        for(int k=0;k<s.length();k++)
//        {
//            s_dec[k] = s[k];
//        }
//        for(int k=0;k<s.length()-1;k++)
//        {
//            diff[k] = abs(s_dec[k]-s_dec[k+1]);
//        }
//
//        s_rev=s;
//        reverse(s_rev.begin(),s_rev.end());
    //cout<<s_rev<<endl;
//        for(int k=0;k<s_rev.length();k++)
//        {
//            s_dec_rev[k] = s_rev[k];
//        }
//        for(int k=0;k<s_rev.length()-1;k++)
//        {
//            diff_rev[k] = abs(s_dec_rev[k]-s_dec_rev[k+1]);
//        }

//        cout<<"S1: ";
//        for(int k=0;k<s_rev.length()-1;k++)
//        {
//            cout<<diff[k]<<" ";
//        }
//        cout<<endl;
//        cout<<"S2: ";
//        for(int k=0;k<s_rev.length()-1;k++)
//        {
//            cout<<diff_rev[k]<<" ";
//        }
//        cout<<endl;


//        if(areEqual(diff,diff_rev))
//            cout<<"Funny"<<endl;
//        else
//            cout<<"Not Funny"<<endl;
//    }
    int n,count;
    string s,r;
    cin>>n;
    while(n--)
    {
        count=0;
        cin>>s;
        r=s;
        reverse(r.begin(),r.end());
        for(int i=1; i<s.length(); i++)
        {
            if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
            {
                count++;
            }
        }
        if(count==s.length()-1)
        {
            cout<<"Funny\n";
        }
        else cout<<"Not Funny\n";

    }
    return 0;
}
