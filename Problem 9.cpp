//ANSWER IS 31875000
//EXECUTION PROCESS TAKES APPROX. 32.411 SECONDS
#include<iostream>

using namespace std;

int main()
{
     int a=0,b=0,c,x=0;

     while(x==0)
     {
          c=1000-a-b;
          if(a*a+b*b==c*c&&a<c&&b<c)
               break;
          b++;
          if(c<1)
          {
               a++;
               b=0;
          }
          cout<<a<<" "<<b<<"\n";
     }
     cout<<a*b*c;
}
