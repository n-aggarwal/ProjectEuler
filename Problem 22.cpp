//ANSWER IS 871198282
#include<bits/stdc++.h>

using namespace std;


int main()
{
     ifstream fi("names.txt");
     string str2[5500],str="";
     char ch;
     int i=0;
     while(!fi.eof())
     {
          fi>>ch;
          if(ch!='"'&&ch!=',')
               str+=ch;
          else if(ch==',')
          {
               str2[i]=str;
               str="";
               i++;
          }
     }
     str2[i]="ALONSO";
     i++;

     for(int x=0;x<i;x++)
     {
          for(int y=0;y<x;y++)
          {
           if(str2[x].compare(str2[y])==-1)
           {
                string temp = str2[y];
                str2[y]=str2[x];
                str2[x]=temp;
           }
          }
     }

     for(int t=0;t<i;t++)
     {
          cout<<str2[t]<<"   ";
     }
     long long ans=0;

     for(int k=0;k<i;k++)
     {
          string qwe=str2[k];
          long calc=0;
          for(int h=0;h<qwe.length();h++)
               calc+=qwe[h]-64;
          calc*=(k+1);
          ans+=calc;

     }
     cout<<str2[i]<<"\n";
     cout<<"\n\n\n"<<i<<" "<<ans;
}
