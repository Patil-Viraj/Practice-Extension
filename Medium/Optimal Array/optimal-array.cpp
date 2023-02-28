//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> optimalArray(int n, vector<int> &a)
    {
        int j = 0; // median position
        int sum1 = a[j]; // sum till median position
        int sum2 = 0; // sum till i variable

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            sum2 += a[i];

            int element = a[j]; // median element

            int size1 = (j + 1); // size of the first half including median
            int size2 = (i + 1) - size1; // size of the second half excluding median

            int actual1 = sum1; // actual sum that we have for the first half
            int total1 = size1 * element; // if we want to make all element equal then this should be sum

            int actual2 = sum2 - sum1; // actual sum that we have for the second half
            int total2 = size2 * element; // if we want to make all element equal then this should be sum

            int ops1 = total1 - actual1; // operations for first half
            int ops2 = actual2 - total2; // operations for second half

            ans.push_back(ops1 + ops2);

            // updating median and sum till median
            if (i & 1)
                sum1 += a[++j];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends