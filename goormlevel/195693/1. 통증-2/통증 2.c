#include <stdio.h>

int main() {
    int n, a, b;
    
    if (scanf("%d %d %d", &n, &a, &b) != 3) {
        return 0;
    }

    int bval = n / b;

    while (bval >= 0) {
        int remains = n - (bval * b);
        
        if (remains % a == 0) {
            int aval = remains / a;
            printf("%d\n", bval + aval);
            return 0;
        }
        
        bval--;
    }
    
    printf("-1\n");
    
    return 0;
}
