//997651
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int lenOfLongSubarr(ll arr[], ll n, ll k)
{
    unordered_map<ll, ll> um;
    ll sum = 0, maxLen = 0;

    for (ll i = 0; i < n; i++) {

        sum += arr[i];

        if (sum == k)
            maxLen = i + 1;

        if (um.find(sum) == um.end())
            um[sum] = i;

        if (um.find(sum - k) != um.end()) {

            if (maxLen < (i - um[sum - k]))
                maxLen = i - um[sum - k];
        }
    }
    return maxLen;
}

bool isprime(ll num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll prime[100000];
    ll index = 0;
    prime[index++]=2;
    prime[index++]=3;

    ll maxval1 = 0;
    ll maxval2 = 0;
    for(int i=5;i<1000000;i+=2)
    {
        if(isprime(i))
        {
            cout<<i<<"\n";
            prime[index++] = i;
            ll val1 = lenOfLongSubarr(prime,index-1,i);
            if(val1>maxval1)
            {
                maxval1 = val1;
                maxval2 = i;
            }
        }
    }
    cout<<maxval2<<"\n";
}
