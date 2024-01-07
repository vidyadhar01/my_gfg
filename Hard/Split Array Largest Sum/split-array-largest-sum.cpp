//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int nums[] ,int n, int k) {
        // code here
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
             l=max(l,nums[i]);
             r+=nums[i];
        }
        int ans;
        while(l<=r)
        {
             int mid=(l)+(r-l)/2;
             int c=1;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                 if(sum+nums[i]<=mid)
                 {
                      sum+=nums[i];
                 }
                else
                {
                    sum=nums[i];
                    c++;
                }
            }
            if(c<=k)
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends