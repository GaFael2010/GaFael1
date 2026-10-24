
#include <stdio.h>

int main() {
    int n = 1, m = 1, aux, aux2, b;
    int f[10000];

    while (n != 0 || m != 0) {
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0)
            break;

        b = 0;

        for (int i = 0; i < m; i++) {
            scanf("%d", &f[i]);
        }

        for (int i = 0; i < m; i++) {
            aux = f[i];
            aux2 = 0;

            if (aux != 0) {
                for (int j = i + 1; j < m; j++) {
                    if (aux == f[j]) {
                        if (aux2 == 0) {
                            aux2 = 1;
                            b++;
                        }

                        f[j] = 0;
                    }
                }
            }
        }

        printf("%d\n", b);
    }

    return 0;
}
