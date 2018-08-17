//7652413
#include<bits/stdc++.h>
#define ll long long
using namespace std;

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


void check(int arr[],int n)
{
    do
    {
        ll val = 0;
        for(int i=0;i<n;i++)
            val = val*10 + arr[i];
        if(isprime(val))
        {
            cout<<val<<"\n";
        }
    }while(next_permutation(arr,arr+n));
}

int main()
{
    ll ans = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    for(int i=1;i<=9;i++)
    {
        check(arr,i);
        arr[0]  = 1;
        arr[1]  = 2;
        arr[2]  = 3;
        arr[3]  = 4;
        arr[4]  = 5;
        arr[5]  = 6;
        arr[6]  = 7;
        arr[7]  = 8;
        arr[8]  = 9;
    }
    cout<<ans<<"\n";
}
