#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int r;
    int c;
} Point;

char grid[1005][1005];
Point q[1000005]; 
int head = 0, tail = 0;

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    for (int i = 0; i < r; i++) {
        scanf("%s", grid[i]);
        
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == '@') {
                q[tail].r = i;
                q[tail].c = j;
                tail++;
            }
        }
    }

    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    int count = 0;

    while (head < tail) {
        int level_size = tail - head; 

        for (int s = 0; s < level_size; s++) {
            Point curr = q[head];
            head++; 

            for (int i = 0; i < 4; i++) {
                int nr = curr.r + dr[i];
                int nc = curr.c + dc[i];

                if (nr >= 0 && nr < r && nc >= 0 && nc < c) {
                    if (grid[nr][nc] == '&') {
                        printf("%d\n", count);
                        return 0; 
                    } 
                    else if (grid[nr][nc] == '.') {
                        grid[nr][nc] = '@'; 
                        q[tail].r = nr;
                        q[tail].c = nc;
                        tail++; 
                    }
                }
            }
        }
        count++; 
    }

    printf("-1\n");
    
    return 0;
}