//ANSWER IS 906609
//EXECUTION PROCESS TAKES 10.425 SECONDS.
#include<iostream>

using namespace std;

int pall(long a)
{
     long z=0,r=a;
     do
     {
          int x=a%10;
          z=z*10 + x;
          a=a/10;
     }while(a>0);
    // cout<<z<<" "<<r<<"\n";
     if(z==r)
          return 1;
     else
          return 0;

}
int digit(int a)
{
     int x=0;
     while(a>0)
     {
          x++;
          a/=10;
     }
     return x;
}

int main()
{
     long num=1000000;
     int flag=1;
     while(flag==1)
     {
          num--;
          cout<<num<<"\n";
          if(pall(num)==1)
          {
               long a=100;
               while(a<1000)
               {
                    if(num%a==0&&digit(num/a)==3&&a<1000)
                    {
                         cout<<a<<" "<<num/a<<"\n";
                         flag=0;
                         break;
                    }
                    a++;
               }
          }
     }
     cout<<num;
}
