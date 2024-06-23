//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) 
    {
        stack<int>s;
        vector<int>res;
        int oc=1;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='(')
            {
                s.push(oc);
                res.push_back(oc);
                oc++;
            }
            if(str[i]==')')
            {
                res.push_back(s.top());
                s.pop();
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends