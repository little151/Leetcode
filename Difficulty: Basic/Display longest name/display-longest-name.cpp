//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <string>

class Solution {
  public:
    string longest(vector<string> &names) {
        string longest = names[0];
        
        for (int i =0; i<names.size(); ++i){
            if(names[i].length() > longest.length()){
                longest=names[i];
            }
        }return longest;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> names;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        string str;
        while (ss1 >> str) {
            names.push_back(str);
        }
        Solution obj;
        string res = obj.longest(names);
        cout << res << "\n";
    }
}

// } Driver Code Ends