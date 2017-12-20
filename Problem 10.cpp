//ANSWER IS 142913828922
//EXECUTION PROCESS TOOK APPROXIMATELY 531.707 SECONDS
#include<iostream>

using namespace std;

int prime(long a)
{    int flag=1;
     for(int i=2;i<=a/2;i++)
     {
          if(a%i==0)
            {
                 flag=0;
                 break;
            }
     }
     if(flag==0)
          return 0;
     else
          return 1;
}

int main()
{
     long long num=2,sum=0;
     while(num<2000000)
     {
          cout<<num<<"\n";
          if(prime(num)==1)
               sum+=num;
          num++;
     }
     cout<<sum;
}
