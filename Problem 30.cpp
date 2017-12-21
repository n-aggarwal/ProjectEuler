//ANSWER IS 443839
//EXECUTION PROCESS TAKES 86.703 SECONDS
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
     long n=2,num,a,sum=0;
     int d;
     while(n<1000000)
     {    cout<<n;
          a=n;
          num=0;
          while(a>0)
          {
               d=a%10;
               a=a/10;
               num+=pow(d,5);
          }
          if(num==n)
          {
               cout<<"\t<--";
               sum+=n;
          }
          cout<<endl;
          n++;
     }
     cout<<sum;
}
