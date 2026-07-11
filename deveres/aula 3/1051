#include <stdio.h>

int main (){
    double a;
    scanf("%lf", &a);

    if(a>=0 && a<=2000)
        printf("Isento\n");

    else if(a>=2000.1 && a<=3000)
         printf("R$ %.2f\n", (a - 2000.0) * 0.08);
    else if(a>=3000.1 && a<=4500)
         printf("R$ %.2f\n", 1000.0 * 0.08 + (a - 3000.0) * 0.18);
    else if(a>4500)
         printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + (a - 4500.0) * 0.28);
    
}
