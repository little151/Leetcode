//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <cmath>
class Solution {
  public:
    int calculateFriendliness(vector<int>& arr) {
        // code here
        int sum=0;
        
        int n = arr.size();
        
        for (int i=0; i<n; ++i){

            sum += abs(arr[i] - arr[(i+1) %n]);
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.calculateFriendliness(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends