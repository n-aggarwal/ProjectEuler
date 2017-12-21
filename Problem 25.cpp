//ANSWER IS 4782
//EXECUTION PROCESS TAKES 1.656 SECONDS

#include<iostream>

using namespace std;


int main()
{
     long long index=2;
     int a[1001],i,j,k,b[1001],c[1001];
     for(i=0;i<1001;i++)
     {
          a[i]=0;
          b[i]=0;
          c[i]=0;
     }
     a[1]=1;
     b[1]=1;
     int d=1;
     while(d<1000)
     {
          index++;
          for(i=1;i<=d;i++)
               c[i]=b[i];
          k=0;
          for(i=1;i<=d;i++)
          {
               k=a[i]+b[i]+k;
               b[i]=k%10;
               k=k/10;
               if(i==d&&k>0)
                    d++;
          }
          for(i=1;i<=d;i++)
               a[i]=c[i];
         // for(i=d;i>=1;i--)
           //    cout<<b[i];

          cout<<d<<"\n";
     }
     cout<<index;

}
