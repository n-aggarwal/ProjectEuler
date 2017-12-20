//ANSWER IS 648
#include<iostream>

using namespace std;

int main()
{
     int a[200];
          int n,r=0,q,l,k,g;
          n=100;
          a[0]=1;
          for(q=1;q<200;q++)
               a[q]=0;
          int m=1;
          for(int j=2 ; j<=n ;j++)
          {    m=1;
               for(k=0;k<m;k++)
               {     int flag=1;
                    g=a[k]*j;
                       for(int d=k;d<200;d++)
                        {     flag=1;
                             if(a[d]>0)
                             {
                                  flag=0;
                                  break;
                             }
                        }

                    if((g==0)&&(r==0)&&(flag==0))
                        {
                             m++;
                        }
                    if((g==0)&&(r<10)&&(r>0))
                         {
                              m++;
                         }
                    g+=r;
                    l=g%10;
                    a[k]=l;
                    r=g/10;
                    if(r>0)
                         m++;
               }
          }
          long sum=0;
          for(q=m-2;q>=0;q--)

               {
                    cout<<a[q];
                    sum+=a[q];
               }
               cout<<"\n"<<sum;
}
