//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length()!=str2.length())
         return 0;
        if(str1.length()==1)
         return 0;
        string rev1=str1;
        string rev2=str1;
        
        reverse(rev1.begin(),rev1.begin()+2);
        reverse(rev1.begin()+2,rev1.end());
        reverse(rev1.begin(),rev1.end());
        
        reverse(rev2.begin(),rev2.end()-2);
        reverse(rev2.end()-2,rev2.end());
        reverse(rev2.begin(),rev2.end());
        
       
        if(str2==rev1 || str2==rev2)
         return true;
        return false; 
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends