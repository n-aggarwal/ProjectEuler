//748317
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fast_exp(ll base, ll exp) {
    ll res=1LL;
    while(exp>0) {
       if(exp%2==1) res=(res*base);
       base=(base*base);
       exp/=2LL;
    }
    return res;
}


bool isprime(ll num)
{
    if(num==1)
        return false;
    for(ll i = 2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

bool checkL(ll num)
{
    while(num>0)
    {
        num/=10;
        if(isprime(num)==false)
            return false;
    }
    return true;
}

bool checkR(ll num)
{
    ll cntdigits = 0;
    ll a =num;

    while(a>0)
    {
        cntdigits++;
        a/=10;
    }

    while(cntdigits>0)
    {
        ll x = num%fast_exp(10,cntdigits-1);
        if(isprime(x)==false)
            return false;
        cntdigits--;
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

    ll cnt = 0;
    ll sum = 0;
    ll n = 11;
    while(cnt<11)
    {
        cout<<n<<" "<<cnt<<"\n";
        if(isprime(n))
        {
            if(checkL(n) && checkR(n))
            {
                cnt++;
                sum+=n;
            }
        }
        n+=2;
    }
    cout<<"\n"<<sum<<"\n";
}
