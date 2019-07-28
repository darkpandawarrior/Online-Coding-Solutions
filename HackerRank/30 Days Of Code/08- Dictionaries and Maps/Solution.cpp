#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> mp;
    string m,key;
    int n,value;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key>>value;
        mp.insert(pair<string, int>(key,value));
    }
    map<string,int>::iterator it;
    
    while(cin>>m)
    {
        if(mp.find(m)!=mp.end())
        {   it=mp.find(m);
            cout<<it->first<<"="<<it->second<<endl;
        }
        else
        {cout<<"Not found"<<endl;}
    }
    return 0;
}

