//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxPoint(int k, vector<int>& arr1, vector<int>& arr2) {
        
        int a;
        int n= arr1.size();
        vector<int> s(n);
        //int j;
        //int arr[j]; //New array for simplified data (Will find max from this data)
        for(int i=0; i<arr1.size(); ++i){
            a= k/arr1[i];
            s[i]= a*arr2[i];  //arr gets updated as calculated array/Simplified array
        }
        
        return *max_element(s.begin(), s.end());
        
        // code here
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        // vector<int> v;
        int v = ob.maxPoint(k, arr1, arr2);

        cout << v << endl;
        // cout << "~" << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends