#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    int x;
    int y;
    int val;
} Melt;

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int** nlist = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        nlist[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &nlist[i][j]);
        }
    }

    int max_size = n * n;
    Point* ice = (Point*)malloc(max_size * sizeof(Point));
    int ice_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (nlist[i][j] > 0) {
                ice[ice_count].x = i;
                ice[ice_count].y = j;
                ice_count++;
            }
        }
    }

    int dh[4] = { 1, 0, 0, -1 };
    int dw[4] = { 0, 1, -1, 0 };
    int answer = 0;

    Point* next_ice = (Point*)malloc(max_size * sizeof(Point));
    Melt* melt_info = (Melt*)malloc(max_size * sizeof(Melt));

    while (ice_count > 0) {
        int next_ice_count = 0;
        int melt_count = 0;

        for (int k = 0; k < ice_count; k++) {
            int x = ice[k].x;
            int y = ice[k].y;

            int count = 0;
            for (int d = 0; d < 4; d++) {
                int row = x + dh[d];
                int col = y + dw[d];

                if (row >= 0 && row < n && col >= 0 && col < n && nlist[row][col] == 0) {
                    count++;
                }
            }

            if (nlist[x][y] - count > 0) {
                next_ice[next_ice_count].x = x;
                next_ice[next_ice_count].y = y;
                next_ice_count++;

                melt_info[melt_count].x = x;
                melt_info[melt_count].y = y;
                melt_info[melt_count].val = nlist[x][y] - count;
                melt_count++;
            }
            else {
                melt_info[melt_count].x = x;
                melt_info[melt_count].y = y;
                melt_info[melt_count].val = 0;
                melt_count++;
            }
        }

        for (int k = 0; k < melt_count; k++) {
            nlist[melt_info[k].x][melt_info[k].y] = melt_info[k].val;
        }

        for (int k = 0; k < next_ice_count; k++) {
            ice[k] = next_ice[k];
        }
        ice_count = next_ice_count;

        answer++;
    }

    printf("%d\n", answer);

    for (int i = 0; i < n; i++) free(nlist[i]);
    free(nlist);
    free(ice);
    free(next_ice);
    free(melt_info);

    return 0;
}