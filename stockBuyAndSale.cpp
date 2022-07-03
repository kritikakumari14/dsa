// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> A, int n)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        int i=0;
        while(i<n){
            if(A[i]<A[i+1]){
                temp.emplace_back(i++);
            }
            while(i<n && (A[i]<A[i+1])){
                    i++;
            }
            temp.emplace_back(i++);
            ans.emplace_back(temp);
            temp.clear();
        }
        return ans;
    }
};

// { Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for (int i = 0; i < ans.size(); i++)
        c += A[ans[i][1]] - A[ans[i][0]];
    return (c == p) ? 1 : 0;
}

int main()
{

    vector<int> A{100, 180, 260, 310, 40, 535, 695};
    Solution ob;
    vector<vector<int>> ans = ob.stockBuySell(A, 7);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends