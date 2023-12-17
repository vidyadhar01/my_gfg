//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int dp[1000001];
    
    int helper(int *arr, int ind){
        if(ind == 0) return arr[0];
        
        if(ind < 0) return 0;
        
        if(dp[ind] != -1) return dp[ind];
        
        int pick = arr[ind] + helper(arr, ind-2);
        
        int notPick = helper(arr, ind-1);
        
        return dp[ind] = max(pick, notPick);
    }
    
	int findMaxSum(int *arr, int n) {
	    memset(dp, -1, sizeof(dp));
	    return helper(arr, n-1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends