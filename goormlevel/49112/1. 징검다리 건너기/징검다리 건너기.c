#include <stdio.h>
#include <stdlib.h>

#define INF 1000000000

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int* p = (int*)calloc(n + 2, sizeof(int));
    for (int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    int* dp = (int*)malloc((n + 2) * sizeof(int));
    dp[0] = 0;
    
    for (int i = 1; i <= n + 1; i++) {
        dp[i] = INF;
    }

    for (int i = 1; i <= n + 1; i++) {
        int min_val = INF;
        
        if (i >= 1) min_val = min(min_val, dp[i - 1]);
        if (i >= 2) min_val = min(min_val, dp[i - 2]);
        if (i >= 3) min_val = min(min_val, dp[i - 3]);
        
        dp[i] = min_val + p[i];
    }

    printf("%d\n", dp[n + 1]);

    free(p);
    free(dp);

    return 0;
}