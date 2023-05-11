//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int ans=0,n=s.size();
        char cur='?';
        for(int i=0;i<n/2;i++){
            if((s[i]!='?'&&s[n-i-1]!='?')&&s[i]!=s[n-i-1]){
                return -1;
            }
            if(s[i]=='?'&&s[n-i-1]!='?'){
                s[i]=s[n-i-1];
            }
            if(s[i]!='?'){
                if(cur=='?'){
                    cur=s[i];
                }
                else{
                    ans+=abs(s[i]-cur);
                    cur=s[i];
                }
            }
        }
        return ans*2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends