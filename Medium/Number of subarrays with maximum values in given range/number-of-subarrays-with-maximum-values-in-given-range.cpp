//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    long atMost(int a[], int n, int bound){
       long i = 0, j = 0, cnt = 0;

       while(j<n){
         if(a[j]<=bound){
          cnt+=(j-i+1);
          j++;
         }
         else{
           j++;
           i = j;
         }
       }

       return cnt;
    }
    
    long countSubarrays(int a[], int n, int L, int R)
    {
        return atMost(a,n,R) - atMost(a,n,L-1);
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends