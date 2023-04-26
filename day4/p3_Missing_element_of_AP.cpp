//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        int l = 1, r = n-1, a = arr[0], diff;
        if(n == 2) return (arr[0]+arr[1])/2;
        int x = arr[1]-arr[0], y = arr[2] - arr[1];
        if(x == y){
            diff = x;
        }
        else{
            return x>y?(arr[0]+arr[1])/2:(arr[1]+arr[2])/2;
        }
        
        while(l <= r){
            int m = (l+r)/2;
            int tn = a+m*diff, tm = a+(m-1)*diff;
            if(arr[m-1] == tm && arr[m] > tn){
                return (arr[m-1]+arr[m])/2;
            }
            else if(arr[m] > tn){
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        
        int idx = ceil(n/2.0);
        return (arr[idx-1]+arr[idx])/2;
        // return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends