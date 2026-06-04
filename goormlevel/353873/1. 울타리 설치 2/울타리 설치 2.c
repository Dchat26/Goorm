#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
	  int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    Point *points = (Point *)malloc(sizeof(Point) * n);
    if (points == NULL) {
        return -1;
    }

    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    int answer = 0;
    for (int i = 0; i < n - 1; ++i) {
        int dx = points[i+1].x - points[i].x;
        int dy = points[i+1].y - points[i].y;
			
        answer += hypot(dx, dy);
    }
    int dx_last = points[0].x - points[n-1].x;
    int dy_last = points[0].y - points[n-1].y;
	
    answer += hypot(dx_last, dy_last);

    printf("%d\n", answer);

    free(points);

    return 0;
}