//ANSWER IS 1074
#include<iostream>

using namespace std;

int main()
{
     int a[15][15],i,j,m1,m2;
     for(i=0;i<15;i++)
     {
          for(j=0;j<15;j++)
               a[i][j]=0;
     }
     for(i=0;i<15;i++)
     {
          for(j=0;j<=i;j++)
               cin>>a[i][j];
     }
     for(i=13;i>=0;i--)
     {
          for(j=0;j<=i;j++)
          {
               m1=a[i][j]+a[i+1][j];
               m2=a[i][j]+a[i+1][j+1];
               if(m1>m2)
                    a[i][j]=m1;
               else
                    a[i][j]=m2;
          }
     }
     cout<<a[0][0];
}
