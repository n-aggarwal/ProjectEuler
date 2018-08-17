//5482660
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll arr[100000];
    ll index = 0;

    ll n = 1;
    while(index<10000)
    {
        ll val = (n*(3*n-1))/2;
        arr[index++] = val;
        n++;
    }
    // for(int i=0;i<index;i++)
    //     cout<<arr[i]<<" ";
    ll mindiff = INT_MAX;
    for(int i=0;i<index;i++)
    {
        cout<<i<<" "<<mindiff<<"\n";
        for(int j=i;j<index;j++)
        {
            //cout<<j<<" ";
            if(binary_search(arr,arr+index,arr[i]+arr[j]))
            {
                //cout<<"<-----";
                if(binary_search(arr,arr+index,arr[j]-arr[i]))
                {
                    if(arr[j]-arr[i]<mindiff)
                        mindiff = arr[j]-arr[i];
                }
            }
            //cout<<"\n";
        }
        //cout<<"\n";
    }
    cout<<"\n"<<mindiff<<"\n";
}
