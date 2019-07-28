#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int>arr)
    {
        elements=arr;
    }
    
    int diff=0;
    void computeDifference()
    {
    sort(elements.begin(),elements.end());
    vector<int>::iterator it1=elements.begin();
    vector<int>::iterator it2=elements.end()-1;
    maximumDifference=*it2-*it1;}


}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}