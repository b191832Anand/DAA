#include <iostream>
#include <vector>
#include <climits>

// Recursive function with memoization to calculate the minimum number of multiplications
int matrixChainMultiplication(const std::vector<int>& dimensions, int i, int j, std::vector<std::vector<int>>& memo) {
    if (i == j) {
        return 0;  // Base case: single matrix
    }

    if (memo[i][j] != -1) {
        return memo[i][j];  // Return the precalculated value from the memo table
    }

    int minMultiplications = INT_MAX;

    // Place parenthesis at different positions between the first and last matrix,
    // recursively calculate the number of multiplications, and choose the minimum
    for (int k = i; k < j; k++) {
        int leftMultiplications = matrixChainMultiplication(dimensions, i, k, memo);
        int rightMultiplications = matrixChainMultiplication(dimensions, k + 1, j, memo);
        int currentMultiplications = dimensions[i - 1] * dimensions[k] * dimensions[j];
        int totalMultiplications = leftMultiplications + rightMultiplications + currentMultiplications;

        minMultiplications = std::min(minMultiplications, totalMultiplications);
    }

    memo[i][j] = minMultiplications;  // Store the calculated value in the memo table

    return minMultiplications;
}

int main() {
    std::vector<int> matrixDimensions = {40,20,30,10,30};
    int n = matrixDimensions.size();

    // Create a memo table with dimensions (n+1) x (n+1) and initialize with -1
    std::vector<std::vector<int>> memo(n + 1, std::vector<int>(n + 1, -1));

    // Calculate the minimum number of multiplications using recursion with memoization
    int minMultiplications = matrixChainMultiplication(matrixDimensions, 1, n - 1, memo);

    std::cout << "Minimum number of multiplications: " << minMultiplications << std::endl;

    return 0;
}
