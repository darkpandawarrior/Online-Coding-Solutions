#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int i,j,count=0;
    for(i=0;i<n;i++)
     {
         
         for(j=0;j<n-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
                 count++;
             }
         }
     }
     cout<<"Array is sorted in "<<count<<" swaps."<<endl;
     cout<<"First Element: "<<a[0]<<endl;
     cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}

