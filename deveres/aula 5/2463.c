#include <stdio.h>

//ta estrano pq mandei o claid comentar pra geral entender, culpa de vcs por n entender o q eu explico!!!!!


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vida[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vida[i]);
    }

    // soma_atual guarda a soma do "trecho" que estamos carregando
    // no momento, começando pela primeira sala
    int soma_atual = vida[0];

    // melhor guarda o maior resultado já encontrado em qualquer
    // trecho, do início até a sala atual (pode não ser o trecho
    // que termina na última sala!)
    int melhor = vida[0];

    for (int i = 1; i < n; i++) {

        // Aqui está a decisão principal do algoritmo:
        // será que vale mais a pena CONTINUAR carregando a soma
        // que já vinha acumulando (soma_atual + vida[i]),
        // ou é melhor RECOMEÇAR do zero a partir desta sala
        // (usando só vida[i])?
        //
        // Isso acontece porque, se soma_atual for negativa,
        // ela só vai "puxar para baixo" qualquer soma futura.
        // Nesse caso, é melhor abandonar tudo que veio antes
        // e tratar a sala atual como uma nova "porta de entrada".
        if (soma_atual + vida[i] > vida[i]) {
            // vale a pena continuar: a soma acumulada até aqui
            // ainda está ajudando (é positiva ou pelo menos não
            // atrapalha), então mantemos a mesma porta inicial
            soma_atual = soma_atual + vida[i];
        } else {
            // não vale a pena continuar: o que vínhamos
            // acumulando está "pesando" contra nós, então
            // jogamos fora e recomeçamos a soma a partir
            // desta sala — ela vira a nova porta inicial
            soma_atual = vida[i];
        }

        // independente da decisão acima, sempre checamos se
        // a soma que temos agora é a melhor de todas até agora.
        // Isso é necessário porque o trecho ótimo pode terminar
        // em qualquer sala, não necessariamente na última
        if (soma_atual > melhor) {
            melhor = soma_atual;
        }
    }

    // ao final do laço, "melhor" contém a maior soma possível
    // de um trecho contínuo de salas (o resultado do problema)
    printf("%d\n", melhor);
    return 0;
}
}
