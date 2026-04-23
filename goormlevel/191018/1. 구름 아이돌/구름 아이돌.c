#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    int idx;
} Element;

int compare(const void* a, const void* b) {
    Element* elemA = (Element*)a;
    Element* elemB = (Element*)b;

    if (elemA->val != elemB->val) {
        return elemB->val - elemA->val; 
    }
    return elemA->idx - elemB->idx;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
	
    Element* arr = (Element*)malloc(n * sizeof(Element));
    if (arr == NULL) return -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].val);
        arr[i].idx = i;
    }

    qsort(arr, n, sizeof(Element), compare);

    int limit = (n < 3) ? n : 3;
    for (int i = 0; i < limit; i++) {
        printf("%d", arr[i].idx + 1);
        if (i < limit - 1) printf(" ");
    }
    printf("\n");

    free(arr);

    return 0;
}