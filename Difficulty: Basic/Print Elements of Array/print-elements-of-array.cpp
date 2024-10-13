//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &a) {
        // code here
        int n=a.size();
        
        for (int i=0; i<n; ++i){
            cout<<a[i]<<" ";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.printArray(arr);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends