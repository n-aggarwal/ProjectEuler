//ANSWER IS 104743
#include<iostream>

using namespace std;

int main()
{
     int i=2;
     long num=3;

     while(i<10001)
     {    num++;
          int flag=0;
          for(int j=2;j<=num/2;j++)
          {
               if(num%j==0)
                    {
                         flag=1;
                         break;
                    }
          }
          if(flag==0)
               i++;
     }
     cout<<num<<" "<<i;
}
