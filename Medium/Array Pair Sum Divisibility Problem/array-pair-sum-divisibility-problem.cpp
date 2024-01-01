//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> mp;
        // storing remainder
        for(auto x : nums)
            mp[x%k]++;
            
        // if no of 0 is odd return false 
        // i.e. we can't make pair
        if(mp[0]%2 != 0) 
            return false;
        mp.erase(0);
        
        for(auto x : mp)
        {
            // if rem ! = k - rem mean we can't make pair
            if(mp[x.first] != mp[k-x.first])
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends