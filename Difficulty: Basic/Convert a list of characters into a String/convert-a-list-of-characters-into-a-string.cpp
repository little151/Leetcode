//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        string s(arr, arr + n);
        char l=' ';
            s.erase(remove (s.begin(), s.end(), l   ), s.end());
        return s;

        
        //code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        Solution ob;
        
        cout<<ob.chartostr(arr,n)<<endl;

    }
}

// } Driver Code Ends