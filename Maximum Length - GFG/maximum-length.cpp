//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
       priority_queue<int> pq;
       if(a!=0)
       pq.push(a);
       if(b!=0)
       pq.push(b);
       if(c!=0)
       pq.push(c);
       
       while(!pq.empty()){
           int mFreq=pq.top();
           pq.pop(); 
           
          
           if(mFreq<3)
             return a+b+c;
           mFreq-=2;
            if(pq.empty())
           return -1;
           
           int sFreq=pq.top();
           pq.pop();
           sFreq--;
           if(mFreq!=0) pq.push(mFreq);
           if(sFreq!=0) pq.push(sFreq);
       }
       
       return a+b+c;
       
    }
    /// a=3,b=0,c=0
     //abbabbac
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends