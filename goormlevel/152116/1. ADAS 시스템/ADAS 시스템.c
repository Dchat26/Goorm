#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int priority;
    int a;
    int b;
} Node;

Node heap[1000005];
int heap_size = 0;

int compare(Node n1, Node n2) {
    if (n1.priority != n2.priority) return n1.priority - n2.priority;
    if (n1.a != n2.a) return n1.a - n2.a;
    return n1.b - n2.b;
}

void push(Node val) {
    heap[++heap_size] = val;
    int child = heap_size;
    int parent = child / 2;

    while (child > 1 && compare(heap[child], heap[parent]) < 0) {
        Node temp = heap[child];
        heap[child] = heap[parent];
        heap[parent] = temp;
        
        child = parent;
        parent = child / 2;
    }
}

Node pop() {
    Node result = heap[1];
    heap[1] = heap[heap_size--];

    int parent = 1;
    int child = 2;

    while (child <= heap_size) {
        if (child < heap_size && compare(heap[child + 1], heap[child]) < 0) {
            child++;
        }
			
        if (compare(heap[parent], heap[child]) <= 0) break;

        Node temp = heap[parent];
        heap[parent] = heap[child];
        heap[child] = temp;

        parent = child;
        child = parent * 2;
    }
    return result;
}

int get_priority(char c) {
    if (c == 'E') return 0;
    if (c == 'P') return 1;
    return 2;
}

int main() {
    int W, H;
    if (scanf("%d %d", &W, &H) != 2) return 0;

    char** grid = (char**)malloc(W * sizeof(char*));
    bool** visited = (bool**)malloc(W * sizeof(bool*));
    
    int start_a = -1, start_b = -1;

    for (int i = 0; i < W; i++) {
        grid[i] = (char*)malloc((H + 1) * sizeof(char));
        visited[i] = (bool*)calloc(H, sizeof(bool));
        
        scanf("%s", grid[i]);

        for (int j = 0; j < H; j++) {
            if (grid[i][j] == 'S') {
                start_a = i;
                start_b = j;
            }
        }
    }

    visited[start_a][start_b] = true;

    int da[4] = {-1, 1, 0, 0};
    int db[4] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {
        int na = start_a + da[i];
        int nb = start_b + db[i];
        if (na >= 0 && na < W && nb >= 0 && nb < H && !visited[na][nb]) {
            visited[na][nb] = true;
            Node newNode = {get_priority(grid[na][nb]), na, nb};
            push(newNode);
        }
    }

    int danger_point = 0;

    while (heap_size > 0) {
        Node curr = pop();
        
        int a = curr.a;
        int b = curr.b;
        char target = grid[a][b];

        if (target == 'E') break;

        // 3x3 범위 P 탐색
        int p_count = 0;
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                if (dr == 0 && dc == 0) continue;
                
                int na = a + dr;
                int nb = b + dc;
                
                if (na >= 0 && na < W && nb >= 0 && nb < H) {
                    if (grid[na][nb] == 'P') p_count++;
                }
            }
        }

        if (target == '0') {
            danger_point += p_count;
        } else if (target == 'P') {
            danger_point += (p_count - 3);
        }

        for (int i = 0; i < 4; i++) {
            int na = a + da[i];
            int nb = b + db[i];
            if (na >= 0 && na < W && nb >= 0 && nb < H && !visited[na][nb]) {
                visited[na][nb] = true;
                Node newNode = {get_priority(grid[na][nb]), na, nb};
                push(newNode);
            }
        }
    }

    if (danger_point < 0) danger_point = 0;
    printf("%d\n", danger_point);

    for (int i = 0; i < W; i++) {
        free(grid[i]);
        free(visited[i]);
    }
    free(grid);
    free(visited);

    return 0;
}