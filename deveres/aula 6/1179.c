#include <stdio.h>

int main() {
    int i, j, n, K[5], G[5], inicil = 0, inicil2 = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            K[inicil++] = n;
            if (inicil == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, K[j]);
                }
                inicil = 0;
            }
        } else {
            G[inicil2++] = n;
            if (inicil2 == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, G[j]);
                }
                inicil2 = 0;
            }
        }
    }

    for (j = 0; j < inicil2; j++) {
        printf("impar[%d] = %d\n", j, G[j]);
    }
    for (j = 0; j < inicil; j++) {
        printf("par[%d] = %d\n", j, K[j]);
    }

    return 0;
}
