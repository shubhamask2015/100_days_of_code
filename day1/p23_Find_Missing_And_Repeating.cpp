//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int * res = (int *)malloc(2 * sizeof(int));
        
        //finds the repeating element
        for(int i = 0; i < n; i++){
            if(arr[abs(arr[i])-1] < 0){
                res[0] = abs(arr[i]);
            }
            else{
                arr[abs(arr[i])-1] *= -1;
            }
        }
        
        //finds the missing number
        for(int i = 0; i<n; i++){
            if(arr[i] > 0){
                res[1] = i+1;
                break;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends