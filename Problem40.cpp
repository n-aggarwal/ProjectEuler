//210
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string str = "";
    ll num = 1;
    while(str.length()<=1000000)
    {
        str+=to_string(num);
        num++;
    }

    int d1 = 1;
    int d2 = str[9]-'0';
    int d3 = str[100-1]-'0';
    int d4 = str[1000-1]-'0';
    int d5 = str[10000-1]-'0';
    int d6 = str[100000-1]-'0';
    int d7 = str[1000000-1]-'0';

    cout<<d1*d2*d3*d4*d5*d6*d7<<"\n";
}
