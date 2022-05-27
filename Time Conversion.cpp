//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    string s;
//    cin>>s;
//    if(s[8] == 'A')
//    {
//        if(s[0] == '1' && s[1] == '2')
//        {
//            s[0]='0';
//            s[1]='0';
//            for(int i=0; i<8; i++)
//                cout<<s[i];
//        }
//        else
//            for(int i=0; i<8; i++)
//                cout<<s[i];
//    }
//    else
//    {
//
//    }
//    return 0;
//}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    int h, m, s;
    char ch, aorp;

    cin >> h >> ch >> m >> ch >> s >> aorp >> ch;
    h = (aorp == 'A') ? (h==12 ? 0 : h) : (h==12 ? 12 : h+12);

    cout << setw(2) << setfill('0') << h << ":"
         << setw(2) << setfill('0') << m << ":"
         << setw(2) << setfill('0') << s << endl;

    return 0;
}
