//ANSWER IS 70600674
//EXECTUION PROCESS TAKES 5.467 SECONDS
#include<iostream>

using namespace std;

int main()
{
     int a[20][20];

     for(int i=0;i<20;i++)
     {
          for(int j=0;j<20;j++)
               cin>>a[i][j];
     }
     long long max=a[1][1]*a[1][2]*a[1][3]*a[1][4],check=1;

     int i,j,k;
     for(int i=0;i<20;i++)
     {    check=1;
          cout<<i<<" ";
          for(j=0;j<17;j++)
          {    check=1;
               cout<<j<<"\n";
               for(k=0;k<4;k++)
                    check*=a[i][j+k];

               if(check>max)
                    max=check;
          }
     }

     cout<<"\n\n1    "<<max<<"\n\n";
     for(int i=0;i<17;i++)
     {    cout<<i<<" ";
          check=1;
          for(j=0;j<20;j++)
          {    check=1;
               cout<<j<<"\n";
               for(k=0;k<4;k++)
                    check*=a[i+k][j];
               if(check>max)
                    max=check;
          }
     }
     cout<<"\n\n2   "<<max<<"\n\n";
     for(i=0;i<17;i++)
     {
          cout<<i<<" ";
          for(j=0;j<17;j++)
          {    check=1;
               cout<<j<<"\n";
               for(k=0;k<4;k++)
                    check*=a[i+k][j+k];
               if(check>max)
                    max=check;
          }
     }
     cout<<"\n\n3    "<<max<<" \n\n";
     for(i=3;i<20;i++)
     {    check=1;
          cout<<i<<" ";
          for(j=3;j<20;j++)
          {
               cout<<j<<"\n";
               check=1;
               for(k=0;k<4;k++)
                    check*=a[i-k][j+k];
               if(check>max)
                    max=check;
          }
     }
     cout<<"\n\n"<<max;
}

