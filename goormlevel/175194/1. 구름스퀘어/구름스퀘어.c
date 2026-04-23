#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int* arrA = *(int**)a;
    int* arrB = *(int**)b;

    if (arrA[1] == arrB[1]) {
        return arrA[0] - arrB[0];
    }
    return arrA[1] - arrB[1];
}

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    int** nlist = (int**)malloc(n * sizeof(int*));
    if (nlist == NULL) return -1;

    for (int i = 0; i < n; i++) {
        nlist[i] = (int*)malloc(2 * sizeof(int));
        if (nlist[i] == NULL) {
            for (int j = 0; j < i; j++) free(nlist[j]);
            free(nlist);
            return -1;
        }
        if (scanf("%d %d", &nlist[i][0], &nlist[i][1]) != 2) break;
    }

    qsort(nlist, n, sizeof(int*), compare);

    int answer = 0;
    int target = -1;

    for (int i = 0; i < n; i++) {
        if (target <= nlist[i][0]) {
            answer++;
            target = nlist[i][1] + 1;
        }
    }

    for (int i = 0; i < n; i++) free(nlist[i]);
    free(nlist);

    printf("%d\n", answer);

    return 0;
}