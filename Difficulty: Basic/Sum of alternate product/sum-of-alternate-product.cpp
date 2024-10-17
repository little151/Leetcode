//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <algorithm>
class Solution {
  public:
    int altProduct(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        
        int sum=0;
        
        for (int i=0; i<n/2; ++i){
            sum +=arr[i]*arr[n-i-1];
            // n--;
            
        }
        return sum;
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.altProduct(arr);
        cout << res << endl;
        // cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends