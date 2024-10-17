//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // cin>>x;
        int n= arr.size();
        
        int count=0;
        
        for (int i=0; i<n; ++i){
            if (arr[i]<=x){
                count++;
            }
            
        }
        return count;

        // Code Here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        scanf("%d ", &x);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.countOfElements(x, arr);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends