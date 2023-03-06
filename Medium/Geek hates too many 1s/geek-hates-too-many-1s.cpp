//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        for(int i=31;i>=2;i--){
            int one = (1<<i);
            int two = (1<<(i-1));
            int three = (1<<(i-2));
            if(((one&n)!=0) and ((two&n)!=0) and ((three&n)!=0)){
                n = (n^three);
            }
        }
        return n;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends