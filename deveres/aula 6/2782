#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long int x[n];

    // Leitura da sequência
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
    }

    // Caso especial: sequência com apenas um elemento
    if (n == 1) {
        printf("1\n");
        return 0;
    }

    // Define a diferença inicial entre os dois primeiros números
    int d = x[1] - x[0];

    // Toda sequência possui pelo menos uma escadinha
    int cont = 1;

    // Começamos no terceiro elemento
    int i = 2;

    while (i < n) {

        // Calcula a diferença entre o elemento atual e o anterior
        int nova = x[i] - x[i - 1];

        // Se a diferença mudou, uma nova escadinha
        if (nova != d) {

            // Incrementa a quantidade
            cont++;

            // Atualiza a diferença para acompanhar a nova escadinha
            d = nova;
        }

        i++;
    }

    // quantidade total de escadinhas
    printf("%d\n", cont);

    return 0;
}
