//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair <long long, long long> p;
    if(n ==1){
        p.first = a[0];
        p.second = a[0];
        return p;
    }
    
        if(a[0] > a[1]){
            p.first = a[1];
            p.second = a[0];
        }
        else{
            p.first = a[0];
            p.second = a[1];
        }
    
    for(int i=2; i<n; i++){

        if(a[i] < p.first){
            p.first = a[i];
        }
        else if(a[i] > p.second){
            p.second = a[i];
        }

    }

    return p;
}