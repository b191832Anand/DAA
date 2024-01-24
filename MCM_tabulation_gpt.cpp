#include<bits/stdc++.h>
using namespace std;
int matrixChainMultiplication(vector<int>& dimensions) {
    int n = dimensions.size() - 1;
   vector<vector<int>> dp(n,vector<int>(n,INT_MAX));

    for (int i = 0; i < n; ++i)
        dp[i][i] = 0;

    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i <= n - len + 1; ++i) {
            int j = i + len - 1;
            for (int k = i; k < j; ++k) {
                int cost = dp[i][k] + dp[k + 1][j] + dimensions[i] * dimensions[k + 1] * dimensions[j + 1];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
       int n;
       cin>>n;
       vector<int>v(n);
       for(auto &i:v)
        cin>>i;
    int minMultiplications = matrixChainMultiplication(v);

    std::cout << "Minimum number of scalar multiplications: " << minMultiplications << std::endl;

    return 0;
}
