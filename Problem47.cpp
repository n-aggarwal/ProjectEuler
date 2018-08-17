//134043
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool primefactors(ll num)
{
    ll distinct = 0;
    if(num%2==0)
        distinct++;
    while(num%2==0)
        num/=2;
    for(ll i = 3;i<=sqrt(num);i++)
    {
        if(num%i==0)
            distinct++;
        while(num%i==0)
            num/=i;
        if(distinct>4)
            return false;
    }
    if(num>2)
        distinct++;
    if(distinct==4)
        return true;
    return false;
}

int main()
{
    for(ll i=100;i<1000000;i++)
    {
        if(primefactors(i) && primefactors(i+1) && primefactors(i+2) && primefactors(i+3))
        {
            cout<<i<<"\n";
            break;
        }
    }
}
