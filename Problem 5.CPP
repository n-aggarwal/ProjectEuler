//ANSWER IS 232,792,560
//EXECUTION PROCESS MIGHT TAKE TIME;
#include<iostream>

using namespace std;

int main()
{
     long num=116396280,flag=0;  //116396280=2520*11*13*17*19
     while(flag==0)
     {
          int i;
          num+=2;
          cout<<num;
          for(i=2;i<=20;i++)
          {
               if(num%i!=0)
                    {
                         cout<<" "<<i<<"\n";
                         break;
                    }
          }
          if(i==20)
               break;
     }
     cout<<num;
}
