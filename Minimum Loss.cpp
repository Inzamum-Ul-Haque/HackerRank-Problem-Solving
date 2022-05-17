//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    int price[n],sorted[n];
//    for(int i=0; i<n; i++)
//    {
//        int x;
//        cin>>x;
//        sorted[i]=x;
//        price[x]=i;
//    }
//    int len=sizeof(sorted)/sizeof(sorted[0]);
//    sort(sorted, sorted+len);
//
//    int min=INT_MAX;
//    for(int i=0;i<n-1;i++)
//    {
//        int x=sorted[i+1]-sorted[i];
//        if(x<min)
//        {
//            int first=price[sorted[i]];
//            int second=price[sorted[i+1]];
//            if(second<first)
//            {
//                min=x;
//            }
//        }
//    }
//    cout<<min;
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> sorted(n);
    map<double, int> arr;
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        sorted[i] = x;
        arr[x] = i;
    }
    sort(sorted.begin(), sorted.end());
    double min = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        double x = sorted[i + 1] - sorted[i];
        if (x < min) {
            int first = arr[sorted[i]];
            int second = arr[sorted[i + 1]];
            if (second < first) {
                min = x;
            }
        }
    }
    cout << long(min);
    return 0;
}
