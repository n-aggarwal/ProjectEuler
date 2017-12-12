//ANSWER IS 25164150
#include<iostream>

using namespace std;

int main()
{
     long long sum1=0,sum2=0;

     int i=1;

     while(i<101)
     {
          sum1+=i*i;
          i++;
     }
     i=100;
     sum2= (i*(i+1))/2;
     sum2*=sum2;

     cout<<sum2-sum1;
}
