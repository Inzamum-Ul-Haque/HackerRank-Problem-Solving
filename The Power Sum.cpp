#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int countSum(int num,int sums[],int index,int size)
{
    if(num == 0)
        return 1;
    else if(index == size)
        return 0;

    int count=0;
    count+=countSum(num,sums,index+1,size);
    count+=countSum(num-sums[index],sums,index+1,size);

    return count;
}

int main()
{
    int num,root;
    cin>>num>>root;
    int sums[(int)pow(num, 1.00/root)];
    int index=0;
    for(int i=1;i<=(int)pow(num, 1.00/root);i++)
    {
        sums[index]=pow(i, root);
        index++;
    }
    cout<<countSum(num,sums,0,(int)pow(num, 1.00/root));
    return 0;
}
