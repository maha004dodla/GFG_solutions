//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) 
    {
        long long i,j,ans=0;
        for(i=0; i<31; i++)
        {
            long long c=0;
            for(j=0; j<n; j++)
            {
                if(arr[j]&(1<<i))
                {
                    c++;
                }
            }
            ans+=(c*(c-1)/2)*(1<<i);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends