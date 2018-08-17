//840
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll p = 3;
    ll s = 0;
    for(int i=3;i<=1000;i++)
    {
        cout<<i<<"\n";
        ll cnt = 0;
        for(int a = 1;a<i/2;a++)
        {
            for(int b = a;b<i/2;b++)
            {
                int c = i-a-b;
                if(c<0)
                    continue;
                if(a*a + b*b == c*c)
                {
                    cnt++;
                }
            }
        }
        if(cnt>s)
        {
            s = cnt;
            p = i;
        }
    }
    cout<<"\n"<<s<<" "<<p<<"\n";
}
