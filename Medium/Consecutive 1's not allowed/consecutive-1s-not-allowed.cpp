//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    // #define ll long long
    ll countStrings(int n) {
        // code here
       // To count the possible answer not to return all set of possible values 
        
        int one_end = 1;
        int zero_end = 1;
        
        int sum = one_end + zero_end;
        
        if(n == 1){
            return sum;
        }
        
        int i = 2;
        
        while(i <= n){
            one_end = zero_end % (1000000007);
            zero_end = sum % (1000000007);
            sum = zero_end + one_end % (1000000007);
            
            i++;
        }
        
        return sum % (1000000007);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends