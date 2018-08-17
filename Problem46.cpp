//5777
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(ll num)
{
    for(ll i = 2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    ll prime[100000];
    ll index = 0;

    ll n = 2;

    while(index<10000)
    {
        //cout<<n<<"\n";
        if(isprime(n))
        {
            prime[index++] = n;
        }
        n++;
    }

    for(int i=3;i<prime[index-1];i+=2)
    {
        if(binary_search(prime,prime+index,i)==false)
        {
            //cout<<i<<"\n";
            bool flag = false;
            int x = 0;
            while(prime[x]<i && flag == false)
            {
                ll val = i - prime[x];
                if(val%2==1)
                {
                    x++;
                    continue;
                }
                val/=2;
                if(val==sqrt(val)*sqrt(val))
                    flag = true;
                x++;
            }

            if(flag==false)
                cout<<i<<"\n";
        }
    }

}
