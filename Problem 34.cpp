//ANSWER IS 40730
//EXECUTION PROCESS TAKES 86.637 SECONDS
#include<iostream>

using namespace std;
long fctrl(int n)
{
     long f=1;
     for(int i=n;i>=1;i--)
          f*=i;
     return f;
}
int main()
{
     long long n=3,sum=0,d,a,x=0;
    while(n<1000000)
     {
          sum=0;
          cout<<n;
          a=n;
          while(a>0)
          {
               d=a%10;
               a=a/10;
               sum+=fctrl(d);
          }
          if(sum==n)
          {
               cout<<"<--";
               x+=n;
          }
          n++;
          cout<<endl;
    }
     cout<<x;
}
