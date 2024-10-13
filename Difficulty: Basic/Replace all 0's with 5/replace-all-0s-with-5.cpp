//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        if(n==0){
            return 5;
        }
        int result =0;
        int place =1;
        
        while(n>0){
            int digit=n%10;
            if (digit ==0){
                digit=5;
            }
            
            result += digit*place;
            place *=10;
            n/=10;
        }
        return result;
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;
    }
}
// } Driver Code Ends