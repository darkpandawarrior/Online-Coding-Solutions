#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

   int sum=0,DR,DE,YR,YE,MR,ME;
    
    cin>>DR>>MR>>YR;
    cin>>DE>>ME>>YE;
    if(YR<=YE)
    {
      if(MR<=ME)
      {
         if(DR<=DE)
         {
             cout<<sum;
         }
         else
         {
             sum=15*(DR-DE);
             cout<<sum;
         }

      }
      else if(MR>ME&&YR<YE)
      {
          cout<<sum;
      }
      else
      {
          sum=500*(MR-ME);
          cout<<sum;
      }
    }
   else
   {   sum=10000;
       cout<<sum;
   }
}
