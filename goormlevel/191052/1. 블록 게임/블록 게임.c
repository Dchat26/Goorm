#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} Point;

char d[500005]; 

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int size = 2 * n + 1;

    int** nlist = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        nlist[i] = (int*)calloc(size, sizeof(int)); 
    }
    nlist[n][n] = 1;

    scanf("%s", d);
    int len = strlen(d);

    int* s = (int*)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) {
        scanf("%d", &s[i]);
    }

    Point* temp = (Point*)malloc(size * size * sizeof(Point));
    
		int top = 0;
    temp[top].x = n;
    temp[top].y = n;
    top++;
    
    int x = n, y = n;

    for (int i = 0; i < len; i++) {
        char c = d[i];
        int score = s[i];

        int nx = x, ny = y;
        if (c == 'L') nx--;
        else if (c == 'R') nx++;
        else if (c == 'U') ny++;
        else if (c == 'D') ny--;

        if (nlist[nx][ny] == 0) {
            temp[top].x = nx;
            temp[top].y = ny;
            top++;
            
            nlist[nx][ny] = score;
            x = nx;
            y = ny;
        } 
        else {
            while (top > 0) {
                top--;
                int ax = temp[top].x;
                int ay = temp[top].y;

                if (ax == nx && ay == ny) {
                    nlist[ax][ay] = score;
                    
                    top++; 
                    
                    x = nx;
                    y = ny;
                    break;
                } else {
                    nlist[ax][ay] = 0;
                }
            }
        }
    }

    long long total_score = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            total_score += nlist[i][j];
        }
    }

    printf("%lld\n", total_score);

    for (int i = 0; i < size; i++) free(nlist[i]);
    free(nlist);
    free(s);
    free(temp);

    return 0;
}