//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
public:
    int minValueToBalance(vector<int> &arr) {
        int n = arr.size();
        int f = n / 2;

        int sum = 0;
        for (int i = 0; i < f; ++i) {
            sum += arr[i];
        }

        int sum2 = 0;
        for (int i = f; i < n; ++i) {
            sum2 += arr[i];
        }

        if (sum < sum2) {
            return sum2 - sum;
        } else if (sum > sum2) {
            return sum - sum2;
        } else {
            return 0;
        }
    }
};



//{ Driver Code Starts.

// Driver program to test above function
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
        int ans = ob.minValueToBalance(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends