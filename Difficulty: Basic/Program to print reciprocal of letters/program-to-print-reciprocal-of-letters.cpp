//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string s)
    {
        // Write Your code here
        int n=s.size();
        
        for (int i=0; i<n; ++i){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]= 'Z'- (s[i]- 'A');
            }
            else if(s[i]>='a' && s[i]<='z'){
                s[i]= 'z'- (s[i]- 'a');
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends