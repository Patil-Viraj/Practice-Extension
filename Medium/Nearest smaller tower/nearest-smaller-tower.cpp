//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n=arr.size();
        stack<int>st;
        vector<int>v(n,-1);
        //next smaller number
        //check for smaller number from i+1 to n
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[i]<arr[st.top()]){
                v[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        //smaller number than come before
        //check for small number from i-1 to 0
        while(!st.empty())st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[i]<arr[st.top()]){
                if(v[st.top()]==-1){
                    v[st.top()]=i;
                }
                else{
                    int d1=abs(i-st.top());//new distance
                    int d2=abs(v[st.top()]-st.top());//distance of the initial
                    if(d1<d2){
                        //if new dist is less update
                        v[st.top()]=i;
                    }
                    else if(d1==d2){//if equal check if which one has smaller value
                    //if the value is the same we need to pick the smaller index
                    //thats why we use <=
                        if(arr[i]<=arr[v[st.top()]])v[st.top()]=i;
                    }
                }
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends