//296962999629
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool flag[10000];

bool isprime(ll num)
{
    for(ll i = 2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

void check(int arr[])
{
    int a[3];
    int i = 0;
    do
    {
        ll val = 0;
        for(int i=0;i<4;i++)
            val = val*10 + arr[i];
        if(flag[val])
        {
            a[i++] = val;
            if(i==3)
            {
                sort(a,a+i);
                if(a[1]-a[0]==a[2]-a[1])
                    cout<<a[0]<<a[1]<<a[2];
                return;
            }
        }
    }while(next_permutation(arr,arr+4));
}

int main()
{
    flag[1] = false;
    flag[0] = false;
    for(int i=2;i<=9999;i++)
        flag[i] = isprime(i);
    for(int i=1000;i<=9999;i++)
    {
        if(flag[i]==false)
            continue;
        int a = i;
        int arr[4];
        int index = 3;
        while(a>0)
        {
            arr[index--] = a%10;
            a/=10;
        }
        check(arr);
    }
}
