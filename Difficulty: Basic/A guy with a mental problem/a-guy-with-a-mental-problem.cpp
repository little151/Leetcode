//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minTime(vector<int>& arr1, vector<int>& arr2) {
        // code here.
        int n=arr1.size();
        
        int sum=0;
        int sum1=0;
        
        
        for (int i=0; i<n; ++i){
            
            if (i%2==0){
            sum += arr1[i];
            sum1 += arr2[i];
        }
        else{
            sum+= arr2[i];
            sum1 += arr1[i];
        }
        }
        return min(sum, sum1);
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    while (t--) {
        // Read input for arr1
        string input;
        getline(cin, input);
        stringstream ss1(input);
        vector<int> arr1;
        int num;
        while (ss1 >> num) {
            arr1.push_back(num);
        }

        // Read input for arr2
        getline(cin, input);
        stringstream ss2(input);
        vector<int> arr2;
        while (ss2 >> num) {
            arr2.push_back(num);
        }

        Solution solution;
        cout << solution.minTime(arr1, arr2) << endl;
    }
    return 0;
}

// } Driver Code Ends