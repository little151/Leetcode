//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <algorithm>
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
    int t;
    vector<int> last;
        int n= arr.size();
        
        sort(arr.begin(), arr.end());
        
        // int j=n-1;
        for (int i=0; i<n-2; ++i){
             last.push_back(arr[i]);
        }
    
        return last;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input
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
        vector<int> res = ob.findElements(arr);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        // cout<<"~"<<endl;
    }
}
// } Driver Code Ends