//1533776805
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    //ll triangle[10000];
    ll pentagonal[100000];
    ll hexagonal[100000];

    ll index = 0;
    ll n = 1;

    while(index<100000)
    {
        //cout<<"!";
        ll t = (n*(n+1))/2;
        ll p = (n*((3*n)-1))/2;
        ll h = (n*((2*n)-1));

        //triangle[index] = t;
        pentagonal[index] = p;
        hexagonal[index] = h;

        index++;
        n++;
        //for(int i=0;i<index;i++)
        //    cout<<pentagonal[i]<<" "<<hexagonal[i]<<"\n";
        if(binary_search(pentagonal,pentagonal+index,t) && (binary_search(hexagonal,hexagonal+index,t)))
            cout<<t<<"\n";
    }
    // for(int i=0;i<index;i++)
    //     cout<<pentagonal[i]<<" "<<hexagonal[i]<<"\n";
}
