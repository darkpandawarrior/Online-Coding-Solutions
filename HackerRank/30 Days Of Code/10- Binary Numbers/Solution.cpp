#include <iostream>
#include <array>

#include <bits/stdc++.h>
#include<vector>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> v;
    vector<int>::iterator it=v.end()-1;
    int t=n;
    int b[n],j,i,k;
    int size = 0;
    for( j=0;t!=0;j++)
    {
        size++;
        b[j]=t%2;
        t=t/2;
    }
    for(i=j,k=0;i>0;i--,k++)
    {
        a[k]=b[i];

    }
    int count=0,x=0;
    for(i=0;i<size;i++)
    {
        if(b[i]==1)
            count=count+1;
        else count = 0;
        if (x<count) x = count;
    }
//    if(x<=count)
//    {
//        x=count;
//        count=1;
//    }
    cout<<x;
    return 0;
}
