//ANSWER IS 1366
#include<iostream>

using namespace std;

int main()
{
     int a[350];  //acces it from 1 to 349
     a[1]=1;
     int i,j,k,x,y,z,l=0,m=1;
     for(i=2;i<350;i++)
          a[i]=0;
     while(l<1000)
     {
          l++;
          i=1;
          k=0;
          j=0;
          while(i<=m)
          {
               j=(a[i]*2)+k;
               a[i]=j%10;
               if(j/10==0&&i==m)
                    break;
               else if(i==m)
                    m++;
               i++;
               k=j/10;
          }
     }

     long sum=0;
     for(i=m;i>=1;i--)
     {
          cout<<a[i];
          sum+=a[i];
     }
     cout<<"\n"<<sum;
}
