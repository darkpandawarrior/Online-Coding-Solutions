#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a; double b=0.0; string x= "a";
    cin>>a;
    cin>>b;
    getline(cin>>ws, x);
    cout<<a+i<<endl;
    cout<<fixed << setprecision(1)<<d+b<<endl;
    cout<<s+x;

    return 0;
}