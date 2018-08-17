//162
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll arr[100000];
    int index = 0;
    ll val =1;
    ll n = 2;
    while(index<100000)
    {
        arr[index++] = val;
        val+=n;
        n++;
    }

    ifstream fi("input.txt");
    ofstream fo("output.txt");

    char word;
    string str="";
    ll sum = 0;
    ll cnt = 0;
    while(fi>>word)
    {
        if(word==',')
        {
            if(binary_search(arr,arr+index,sum))
                cnt++;
            sum = 0;
            str="";
        }
        else if(word=='\"')
        {

        }
        else
        {
            str+=word;
            sum+=word-'A'+1;
        }
    }
    cout<<cnt<<"\n";
}
