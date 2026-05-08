#include <stdio.h>

int matrix[505][505];
int visited[505][505];

typedef struct {
    int x;
    int y;
} Node;

Node queue[250005];

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int target_k = matrix[r - 1][c - 1];

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    int max_group_size = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == target_k && visited[i][j] == 0) {
                
                int front = 0;
                int rear = 0;

                queue[rear].x = i;
                queue[rear].y = j;
                rear++;
                visited[i][j] = 1;

                int current_group_size = 0;

                while (front < rear) {
                    int cx = queue[front].x;
                    int cy = queue[front].y;
                    front++;

                    current_group_size++;

                    for (int d = 0; d < 4; d++) {
                        int nx = cx + dx[d];
                        int ny = cy + dy[d];

											if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                            if (visited[nx][ny] == 0 && matrix[nx][ny] == target_k) {
                                visited[nx][ny] = 1;
                                queue[rear].x = nx;
                                queue[rear].y = ny;
                                rear++;
                            }
                        }
                    }
                }
                if (current_group_size > max_group_size) {
                    max_group_size = current_group_size;
                }
            }
        }
    }
	
    printf("%d\n", max_group_size);

    return 0;
}