//ANSWER IS 5537376230
#include<iostream>

using namespace std;

int alphabet_into_digits(char s)
{
     int i;
     if(s=='0')
          i=0;
     else if(s=='1')
          i=1;
     else if(s=='2')
          i=2;
     else if(s=='3')
          i=3;
     else if(s=='4')
          i=4;
     else if(s=='5')
          i=5;
     else if(s=='6')
          i=6;
     else if(s=='7')
          i=7;
     else if(s=='8')
          i=8;
     else
          i=9;
     return i;
}
string digits_into_alpha(int a)
{
     string ch;
     if(a==1)
          ch="1";
     else if(a==2)
          ch="2";
     else if(a==3)
          ch="3";
     else if(a==4)
          ch="4";
     else if(a==5)
          ch="5";
     else if(a==6)
          ch="6";
     else if(a==7)
          ch="7";
     else if(a==8)
          ch="8";
     else if(a==9)
          ch="9";
     else if(a==0)
          ch="0";
     return ch;
}

class bignum
{
          string s1,s2,sans;                      //TWO STRINGS SUM=s1+s2;
          int a1[10000],a2[10000],aans[10000];
          int count_digits_s1,count_digits_s2,count_digits_ans;

     public:

          bignum(string str1,string str2)    //CONSTRUCTOR
          {
               s1=str1;
               s2=str2;
               sans="";

               for(int i=0;i<10000;i++)
               {
                    a1[i]=0;
                    a2[i]=0;
                    aans[i]=0;
               }
               count_digits_s1=0;
               count_digits_s2=0;
               str_into_array();
               count_digits_ans=0;
          }
          void str_into_array()                        //s1 INTO a1 AND s2 INTO a2
          {
               for(int i=0;i<s1.length();i++)
               {
                    a1[s1.length()-i-1]=alphabet_into_digits(s1[i]);
                    count_digits_s1++;
               }
               for(int j=0;j<s2.length();j++)
               {
                    a2[s2.length()-j-1]=alphabet_into_digits(s2[j]);
                    count_digits_s2++;
               }

          }
           void array_into_str()                     //aans INTO sans;
          {
               for(int i=count_digits_ans-1;i>=0;i--)
                    sans+=digits_into_alpha(aans[i]);
          }
          void add()                           //ADDITION
          {
               int i=count_digits_s1-1,j=count_digits_s2-1;
               count_digits_ans=count_digits_s1;
               if(count_digits_s1>=count_digits_s2)
               {
                    for(;i>=0;i--)
                         aans[i]=a1[i];

                    i=0;
                    int a=0;
                    while(i<count_digits_ans)
                    {
                         if(i<count_digits_s2)
                              a=aans[i]+a2[i]+a;
                         else
                              a=aans[i]+a;

                         aans[i]=a%10;
                         a=a/10;

                         if(count_digits_ans==i+1&&a>0)
                              count_digits_ans++;
                         i++;
                    }


               }
               else
               {
                    for(;j>=0;j--)
                         aans[j]=a2[j];
                    count_digits_ans=count_digits_s2;
                    j=0;
                    int a=0;
                    while(j<count_digits_ans)
                    {
                         if(j<count_digits_s1)
                              a=aans[j]+a1[j]+a;
                         else
                              a=aans[j]+a;
                         aans[j]=a%10;
                         a=a/10;
                         if(j+1==count_digits_ans&&a>0)
                              count_digits_ans++;
                         j++;
                    }
               }
               array_into_str();
          }
          string return_sans()
          {
               return sans;
          }

};


int main()
{
     int i=0;
     string a,b,c;

     cin>>a;

     while(i<99)
     {
          cin>>b;
          bignum sum(a,b);
          sum.add();
          c=sum.return_sans();
          a=c;
          i++;
          //cout<<a<<"\n";
     }
     cout<<a;
}
