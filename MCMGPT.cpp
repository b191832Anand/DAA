#include <iostream>
#include <climits>
using namespace std;

int matrixChainMultiplication(int p[], int i, int j) {
    if (i == j)
        return 0;
    
    int minCost = INT_MAX;

    for (int k = i; k < j; k++) {
        int cost = matrixChainMultiplication(p, i, k) +
                   matrixChainMultiplication(p, k + 1, j) +
                   p[i - 1] * p[k] * p[j];

        if (cost < minCost)
            minCost = cost;
    }

    return minCost;
}

int main() {
    int dimensions[] = {40,20,30,10,30};
    int n = sizeof(dimensions) / sizeof(dimensions[0]);

    int minCost = matrixChainMultiplication(dimensions, 1, n - 1);
    cout<<minCost;
}
   
