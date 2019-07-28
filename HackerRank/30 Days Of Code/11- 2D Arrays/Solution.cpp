#include <bits/stdc++.h>

using namespace std;

int main()
{
    long arr[6][6];
    for (int i = 0; i < 6; i++) {

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    long sum=0;
    int x=-2147483648;
    for (int i = 0; i < 4; i++)
     {
        
        for (int j = 0; j < 4; j++) 
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            
            
            if(x<=sum)
            {
                x=sum;
                
            }
            
        }

    
    }
    
    cout<<x;

    return 0;
}
