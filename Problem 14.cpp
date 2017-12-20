//ANSWER IS 837799
//EXECUTION PROCESS TAKES APROXIMATELY 318.936 SECONDS
#include<iostream>

using namespace std;

int main()
{
     long long num=1,a,b;
     long long count ,max=1;

     while(num<=1000000)
     {    count=1;
          a=num;

          while(a!=1)
          {
               if(a%2==0)
                    a/=2;
               else
                    a=(3*a)+1;
               count++;
          }
          if(count>max)
          {
               max=count;
               b=num;
          }
          cout<<num<<"  "<<count<<"  "<<b<<"\n";
          num++;
     }
     cout<<"\n\n"<<b;

}
