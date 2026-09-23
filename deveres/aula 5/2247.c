#include <stdio.h>

int main()
{
    int x = 1, e, n = 0, j, aux;

    scanf("%d", &x);           // lê o x ANTES do while, para poder checar logo se já é 0

    while (x != 0) {
        n++;
        aux = 0;

        printf("Teste %d\n", n);   // só chega aqui se x != 0 

        for (int i = 0; i < x; i++) {
            scanf("%d %d", &e, &j);
            aux = e - j + aux;
            printf("%d\n", aux);    // \n depois de cada valor 
        }

        printf("\n");                // linha em branco no fim do conjunto 

        scanf("%d", &x);              // lê o próximo x, para o while checar de novo
    }

    return 0;
}
