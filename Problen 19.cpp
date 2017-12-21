//ANSWER IS 171
//EXECUTION PROCESS TAKES 0.234 SECONDS
#include<iostream>

using namespace std;

int main()
{
     long count=0;
     int y=1901;
     int flag=0;
     int d=2,i;
     int a[]={3,1,3,2,3,2,3,3,2,3,2,3};
     int b[]={3,0,3,2,3,2,3,3,2,3,2,3};
     while(y<=2000)
     {
          cout<<y<<"  ";
          if(y%4==0)
          {
              for(i=0;i<12;i++)
              {
                   if(d==7)
                     {
                          count++;
                          cout<<i+1<<" ";
                     }

                   d+=a[i];
                   if(d>7)
                    d-=7;
               }
          }
          else
          {
               for(i=0;i<12;i++)
              {
                  if(d==7)
                     {
                          count++;
                          cout<<i+1<<" ";
                     }
                         d+=b[i];
                   if(d>7)
                         d-=7;

              }
          }
          cout<<"\n";
          y++;
     }
     cout<<count;
}
