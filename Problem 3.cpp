//ANSWER IS 6857
#include<iostream>

using namespace std;

int main()
{
     long long a=600851475143;
     long i=2;

     while(a>1)
     {
          if(a%i==0)
               {
                    a/=i;
                    cout<<i<<" ";
               }
          else
               i++;

     }
}
