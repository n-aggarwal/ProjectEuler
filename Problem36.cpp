//872187
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool pal(string a)
{
    ll na = a.length();
    for(ll i=0;i<na/2;i++)
    {
        if(a[i]!=a[na-i-1])
            return false;
    }
    return true;
}

bool pal2(char a[])
{
    ll na = strlen(a);
    for(ll i=0;i<na/2;i++)
    {
        if(a[i]!=a[na-i-1])
            return false;
    }
    return true;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    // cout<<bitset<4>(10).to_string();
    ll cnt = 0;
    //ll n = 1;
    char s[33];
    //ll val = 2;
    for(int i=0;i<1000000;i++)
    {
        cout<<i<<" ";
        if(pal(to_string(i)))
        {
            itoa(i,s,2);
            if(pal2(s))
            {
                cout<<"<--";
                cnt+=i;
            }
        }
        cout<<"\n";
    }
    cout<<"\n"<<cnt<<"\n";
}
