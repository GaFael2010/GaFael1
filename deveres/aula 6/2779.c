#include <stdio.h>

int main() {
    int N, M;

    scanf("%d%d", &N, &M);

    int v[M];
  // Criar o vetor
    for(int i = 0; i < M; i++) {
        scanf("%d", &v[i]);
    }

    // Eliminar figurinhas repetidas
    for(int i = 0; i < M; i++) {
        for(int j = i + 1; j < M; j++) {
            if(v[i] != 0 && v[j] != 0 && v[i] == v[j]) {
                v[j] = 0;
            }
        }
    }

    // Contar figurinhas diferentes
    int c = 0;

    for(int i = 0; i < M; i++) {
        if(v[i] != 0) {
            c++;
        }
    }

    // Calcular quantas faltam
    int F = N - c;

    if(F < 0) {
        F = 0;
    }

    printf("%d\n", F);

    return 0;
}
