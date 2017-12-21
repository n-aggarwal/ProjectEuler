//ANSWER IS 669171001
//EXECUTION PROCESS TAKES 0.156 0SECONDS
#include<iostream>

using namespace std;

int main()
{
     long long sum=0;
     int n=1;
     while(n<=1001)
     {
          if(n%2==1)
               sum+=n*n;
          else
               sum+=3*((n*n)+1);
          n++;
     }
     cout<<sum;

}
