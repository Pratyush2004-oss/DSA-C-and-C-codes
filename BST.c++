#include <iostream>
#include <limits>

using namespace std;

int sum(int freq[], int i, int j)
{
    int s = 0;
    for (int k = i; k <= j; k++)
        s += freq[k];
    return s;
}
int optimalBST(int keys[], int freq[], int n)
{
    int INT_MAX = 999;
    int dp[n + 1][n + 1];

    // For root at index 0 to n-1.
    for (int i = 0; i <= n; i++)
    {
        dp[i][i - 1] = freq[i - 1];
    }

    // For subtrees of size 2 to n.
    for (int L = 2; L <= n; L++)
    {
        for (int i = 0; i <= n - L + 1; i++)
        {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;

            // Consider all possible roots for this subarray
            for (int r = i; r <= j; r++)
            {
                int c = (dp[i][r - 1] + dp[r + 1][j] + sum(freq, i, j));
                if (c < dp[i][j])
                    dp[i][j] = c;
            }
        }
    }

    return dp[0][n - 1];
}

int main()
{
    int keys[] = {10, 20, 30, 40, 50};
    int freq[] = {34, 12, 10, 2, 24};
    int n = sizeof(keys) / sizeof(keys[0]);

    cout << "Cost of Optimal BST is " << optimalBST(keys, freq, n);
    return 0;
}