//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string s) {
        int n=s.size();
        string re;
        // code here
        
        for (int i=n-1; i>=0; --i){
            re.push_back(s[i]);
        }
        return re;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.revStr(s) << endl;
    }
    return 0;
}

// } Driver Code Ends