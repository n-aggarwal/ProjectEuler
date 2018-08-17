//16695334890
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll check(int a[],int index)
{
    ll sum = 0;
    do
    {
        ll d = a[1]*100 + a[2]*10 + a[3];
        if(d%2!=0)
            continue;

        d = a[2]*100 + a[3]*10 + a[4];;
        if(d%3!=0)
            continue;

        d = a[3]*100 + a[4]*10 + a[5];;
        if(d%5!=0)
            continue;

        d = a[4]*100 + a[5]*10 + a[6];
        if(d%7!=0)
            continue;

        d = a[5]*100 + a[6]*10 + a[7];
        if(d%11!=0)
            continue;

        d = a[6]*100 + a[7]*10 + a[8];
        if(d%13!=0)
            continue;

        d = a[7]*100 + a[8]*10 + a[9];
        if(d%17!=0)
            continue;
        d = 0;
        for(int i=0;i<index;i++)
            d = d*10 + a[i];

        sum+=d;
    }while(next_permutation(a,a+index));
    return sum;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    cout<<check(arr,10);
}
