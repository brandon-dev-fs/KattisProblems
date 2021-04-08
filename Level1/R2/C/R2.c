#include <stdio.h>

int main() {
    int r1, r2, s;

    if(scanf("%d%d", &r1, &s) > 0) {
        r2 = (2 * s) - r1;

        printf("%d", r2);
    }
}