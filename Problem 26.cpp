//ANSWER IS 983
//EXECUTION PROCESS TAKES 0.531 SECONDS
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n=2,ans=2,num=1,i,j,k;
     long max=0,curr=0;
     while(n<1000)
     {
          cout<<n<<"\n";
          curr=0;num=1;
          vector <int> a(n);
          for(i=0;i<n;i++)
               a[i]=0;
          int flag=0,f1=0;
          while(flag==0&&f1==0)
          {
               k=num%n;
               if(k==0)
               {
                    flag=0;
                    break;
               }
               else
               {
                    if(a[k]>0)
                    {
                         f1=1;
                         curr++;
                         break;
                    }
                    else
                    {
                         a[k]++;
                         curr++;
                    }
               }
               num=k;
               num*=10;
          }
          if(f1==1)
          {
               curr-=a[k];
               if(curr>max)
               {
                    max=curr;
                    ans=n;
               }
          }
          n++;
     }
     cout<<ans<<"   "<<max;
}
