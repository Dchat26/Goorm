#include <stdio.h>
#include <stdlib.h>

#define INF 1000000000

int min(int a, int b) {
    return a < b ? a : b;
}

int get_dist(int a, int b) {
    int diff = abs(a - b);
    return min(diff, 10 - diff);
}

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int* targets = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &targets[i]);
    }

    int dp[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) dp[i][j] = INF;
    }
    dp[0][0] = 0;
    
    int curr_t = 0;

    for (int t = 0; t < n; t++) {
        int target = targets[t];
        int next_dp[10][10];
        
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) next_dp[i][j] = INF;
        }
        
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if (dp[j][k] != INF) {
                    int cost = dp[j][k];
                    
                    next_dp[j][k] = min(next_dp[j][k], cost + get_dist(curr_t, target));
                    next_dp[curr_t][k] = min(next_dp[curr_t][k], cost + get_dist(j, target));
                    next_dp[j][curr_t] = min(next_dp[j][curr_t], cost + get_dist(k, target));
                }
            }
        }
        
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                dp[j][k] = next_dp[j][k];
            }
        }
        curr_t = target;
    }

    int answer = INF;
    for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 10; k++) {
            answer = min(answer, dp[j][k]);
        }
    }

    printf("%d\n", answer);
    free(targets);

    return 0;
}