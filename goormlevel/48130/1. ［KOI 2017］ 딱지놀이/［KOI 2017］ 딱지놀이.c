#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 0;
    if (scanf("%d", &n) != 1) return 0;

    while (n--) {
        int a = 0;
        scanf("%d", &a);
        
        int alist[5] = {0, 0, 0, 0, 0}; 
        for (int i = 0; i < a; i++) {
            int num = 0;
            scanf("%d", &num);
            alist[num]++;
        }

        int b = 0;
        scanf("%d", &b);
        
        int blist[5] = {0, 0, 0, 0, 0};
        for (int i = 0; i < b; i++) {
            int num = 0;
            scanf("%d", &num);
            blist[num]++;
        }

        bool is_draw = true;

        for (int i = 4; i > 0; i--) {
            if (alist[i] > blist[i]) {
                printf("A\n");
                is_draw = false;
                break;
            }
            else if (alist[i] < blist[i]) {
                printf("B\n");
                is_draw = false;
                break;
            }
        }

        if (is_draw) {
            printf("D\n");
        }
    }

    return 0;
}