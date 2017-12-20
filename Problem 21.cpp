//ANSWER IS 31626
#include<iostream>

using namespace std;

int main()
{
     int a[10000],i,j=2,k,x,y;
     for(int i=0;i<10000;i++)
          a[i]=0;
     a[220]=1;a[284]=1;
     i=2;
     while(i<10000)
     {

          if(a[i]==0)
          {
               j=0;
               k=1;
               x=0;
               y=1;
               while(k<i)
               {
                    if(i%k==0)
                         j+=k;
                    k++;
               }
               while(y<j)
               {
                    if(j%y==0)
                         x+=y;
                    y++;
               }
               if(i==x&&i!=j)
               {
                    a[i]=1;
                    a[j]=1;
               }

          }
          if(a[i]==1)
               cout<<i<<"\n";
     i++;

     }
     long sum=0;
     for(i=1;i<10000;i++)
     {
          if(a[i]==1)
               sum+=i;
     }
     cout<<sum;
}
