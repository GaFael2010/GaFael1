#include <stdio.h>
#include <math.h>
//OBS: 30 minutos pra entender como q ele queria impresso 
int main() {
    int n;
    double j;
    double phi = (1.0 + sqrt(5.0)) / 2.0;;// valor de phi  Proporção Áurea [pq modesto:(  ]

    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        j = (pow(phi, i) - pow(-phi, -i)) / sqrt(5.0);// x = ( phi^i - (-phi)^(-i) ) / raiz² 5 , formula de BINET inversa

        
        if (i == 1) {
            printf("%.0lf\n", round(j)); //sem espaço e pula linha
        } else {
            printf("%.0lf ", round(j));  //com espaço
        }
    }
    return 0;
}
