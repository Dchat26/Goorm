#include <stdio.h>
#include <stdlib.h>

int main() {
    long long k, d1, d2;
    
    if (scanf("%lld %lld %lld", &k, &d1, &d2) == 3) {
        
        long long diff = llabs(d1 - d2);
        
        long long answer = (4 * k * k) - (diff * diff);
        
        if (answer < 0) {
            answer = 0;
        }
        
        printf("%lld\n", answer);
    }
    
    return 0;
}
