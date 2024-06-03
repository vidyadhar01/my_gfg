//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> plus;
        vector<int> minus;
        
        for(int i=0; i<n ;i++){
            
            if(arr[i] < 0){
                minus.push_back(arr[i]);
            }
            else{
                plus.push_back(arr[i]);
            }
        }
        int index= 0;
        
        for(int i=0; i<plus.size(); i++){
            arr[i] = plus[i];
            index++;
        }
    
        for(int i=0; i<minus.size(); i++){
            arr[i + index] = minus[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends