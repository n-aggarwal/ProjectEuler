//ANSWER IS 4613732
#include<iostream>

using namespace std;

int main()
{
     long a=1,b=1;
     long long sum=0;

     while(b<4000000)
     {
          long c=a+b;
          a=b;
          b=c;
          if(c%2==0)
               sum+=c;
     }
     cout<<sum;

}
