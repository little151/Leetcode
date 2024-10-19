//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string s) {
           //code here
           
           int cr=0;
           int cg=0;
           
           for (char c : s){
               if(c == 'R'){
                   cr++;
               }
               else if (c == 'G'){
                   cg++;
               }
           }
           
           if (cg>cr){
               return cr;
           }
           else{
           return cg;
           }
           
       }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends