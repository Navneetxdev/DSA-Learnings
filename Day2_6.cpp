/*
Even Odd Sum -GFG 
Day- 26 March
Algo - iterated array then added sum of even and add

*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        int s=0,r=0;
        for(int i=0;i<N;i++){
            if(i%2==0)
            s+=Arr[i];
            if(i%2!=0)
            r+=Arr[i];
        }
        return {s,r};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
