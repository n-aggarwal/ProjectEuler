//55
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool flag[1000000];

bool isprime(ll num)
{
    for(ll i = 2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

ll convert(string a)
{
    ll val = 0;
    for(int i=0;i<a.length();i++)
        val = val*10 + a[i]-'0';
    return val;
}

bool val(ll num)
{
    ll arr[10];
    int index = 0;
    string a = to_string(num);
    string in = a;
    do
    {
        //rotate
        //cout<<a<<" ";
        char c = a[0];
        for(int i=1;i<a.length();i++)
            a[i-1] = a[i];
        a[a.length()-1] = c;
        //cout<<a<<" ";
        ll n = convert(a);
        //cout<<n<<"\n";
        if(isprime(n)==false)
            return false;
        arr[index++] = n;
    }while(a!=in);
    for(int i=0;i<index;i++)
        flag[arr[i]] = true;
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

    ll cnt = 13;
    for(int i=0;i<1000000;i++)
        flag[i] = false;
    for(int i=101;i<1000000;i++)
    {
        if(flag[i])
        {
            cnt++;
            continue;
        }
        if(isprime(i))
        {
            cout<<i<<"\n";
            if(val(i))
            {
                flag[i] = true;
                cnt++;
            }
        }
    }

    //cout<<val(197);
    cout<<"\n"<<cnt<<"\n";

}
