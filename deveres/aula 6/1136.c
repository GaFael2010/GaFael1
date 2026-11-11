#include <stdio.h>
#include <stdlib.h>   // necessário para usar abs()

int main() {
    int n, l;   // n = maior número (0 até N), l = quantidade de bolas que restaram

    // Lê N e B (aqui chamado de l). Para quando os dois forem 0.
    while (scanf("%d%d", &n, &l) && (n != 0 || l != 0)) {

        int v[l];   // guarda as bolas que restaram no globo
        for (int i = 0; i < l; i++)
            scanf("%d", &v[i]);

        int d[l * l];   // guarda a diferença de cada par (i, j): l*l pares
        int k = 0;      // posição atual do vetor d (no final, k = l*l)

        // Calcula a diferença absoluta de TODOS os pares, incluindo i == j
        // (a bola volta ao globo, então o 0 sempre aparece)
        for (int i = 0; i < l; i++)
            for (int j = 0; j < l; j++)
                d[k++] = abs(v[i] - v[j]);

        int ve = 1;   // "verdadeiro/possível": começa assumindo que dá certo

        // Percorre a sequência de 0 até N
        for (int o = 0; o <= n; o++) {

            int se = 0;   // "achou": 0 = ainda não encontrou o número o

            // Procura o número o entre as diferenças calculadas
            for (int m = 0; m < k; m++) {
                if (d[m] == o) {
                    se = 1;   // encontrou
                    break;    // não precisa procurar mais para esse o
                }
            }

            if (se == 1) {
                // encontrou o número: não faz nada, segue para o próximo o
            } else {
                ve = 0;   // faltou um número da sequência: resposta é N
                break;    // não adianta testar os outros
            }
        }

        // ve == 1 -> imprime Y; ve == 0 -> imprime N
        printf("%c\n", ve ? 'Y' : 'N');
    }
    return 0;
}
