//73682
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void coins(int arr[],int sum,ll &ans,int k)
{
    //cout<<sum<<"\n";
    if(sum>200)
        return;
    if(sum==200)
    {
        ans++;
        cout<<ans<<"\n";
        return;
    }
    for(int i=k;i<8;i++)
    {
        //cout<<sum<<"\n";
        if(sum+arr[i]<=200)
            coins(arr,sum+arr[i],ans,i);
        else
            return;
    }
    return;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int arr[] = {1,2,5,10,20,50,100,200};
    ll ans = 0;
    coins(arr,0,ans,0);
    cout<<"\n"<<ans<<"\n";
}
