#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int T;
    cin>>T;
    int A[T],count;
    for(int i=0;i<T;i++)
    {
        cin>>A[i];
    } 
    for(int i=0;i<T;i++)
    {   count=0;
       if(A[i]==1||A[i]==0||A[i]%2==0)
          { 
            if(A[i]==2)
            {
            cout<<"Prime"<<endl;
            }
            else
            {cout<<"Not prime"<<endl;}
            count=1;
            continue;
          }
         
    

        for(int j=3;j*j<=A[i];j=j+2)
    {     
        if(A[i]%j==0)
        {
            cout<<"Not prime"<<endl;
            count=1;
            break;
        }
    }
     if(count==0)
     cout<<"Prime"<<endl;
    }
    return 0;
}
