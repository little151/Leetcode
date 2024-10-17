//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    void swapKth(int k, vector<int> &arr) {
        // code here
        k=k-1;
        // int temp;
        int n= arr.size();
            if (k<n){
            int temp = arr[k];
            arr[k] = arr[n - k - 1];
            arr[n - k - 1] = temp;
            }

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.swapKth(k, arr);
        for (auto x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends