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
    int min=a[0];
    int maxe=a[0];
    //pair<long long,long long> ans;
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        if(maxe<a[i]){
            maxe=a[i];
        }
    }
    return make_pair(min,maxe);
}