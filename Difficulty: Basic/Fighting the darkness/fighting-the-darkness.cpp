//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
#include <algorithm>
class Solution {
  public:
    int maxDays(vector<int> &arr) {
        int n = arr.size();
        // for(int i=0; i<arr.size();++i){
        //     cin>>arr[i];
        // }
        
        auto max= *max_element(arr.begin(), arr.end());
        // code here
        return max;
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

        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxDays(arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends