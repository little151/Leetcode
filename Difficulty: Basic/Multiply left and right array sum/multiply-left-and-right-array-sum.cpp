//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
public:
    int multiply(vector<int> &arr) {
        int n = arr.size();
        int f = n / 2;
        
        int sum = 0;
        int sum1 = 0;

        for (int i = 0; i < f; ++i) {
            sum += arr[i];
        }

        for (int i = f; i < n; ++i) {
            sum1 += arr[i];
        }

        return sum * sum1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.multiply(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends