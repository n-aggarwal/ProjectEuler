//ANSWER IS -59231
//EXECUTION PROCESS MIGTH TAKE SOME TIME
#include<iostream>

using namespace std;

int prime(int b)
{
     if(b<0)
          b*=-1;
     int flag=0;
     for(int i=2;i<=b/2;i++)
     {
          if(b%i==0)
          {
               flag=1;
               break;
          }
     }
     if(flag==1)
          return 0;
     else
          return 1;
}
long isprime(int a,int b)
{    //cout<<"\t\tas\n";
     int flag=0;
     long long num;
     long n=1;
     while(flag==0)
     {
          num=(n*n)+(a*n)+b;
          if(prime(num)==0||num<0)
               break;
          n++;
         // cout<<n<<"\t";
     }
     return n;
}
int main()
{
     int a=999,b=1000;
     long max=1,num;
     int ma,mb;
     while(a>-1000)
     {    cout<<"\n"<<a<<"  "<<b<<"  "<<max<<"\n";
          if(prime(b)==1)
          {   // cout<<"\n112";
               num=isprime(a,b);
               if(num>max)
                   {
                        max=num;
                        ma=a;
                        mb=b;
                   }
          }
          b--;
          if(b==-1)
          {
               a--;
               b=1000;
          }
     }
     cout<<max<<"  "<<ma<<"  "<<mb<<"  "<<ma*mb;

}
