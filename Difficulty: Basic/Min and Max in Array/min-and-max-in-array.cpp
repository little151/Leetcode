//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

#include <algorithm>
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        
        int s= arr.size();
        long long minV= LLONG_MAX;
        long long maxV= LLONG_MIN;
        
        for(int i=0; i<s; ++i){
            minV= std::min(minV, arr[i]);
            maxV= std::max(maxV, arr[i]);
        }
        return {minV,maxV};
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends