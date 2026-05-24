#include <stdio.h>

 int main(){

    int a,b; //pega valores inteiros
    double c,d;//pega valores reais(pois as horas podem ser fracionadas)

    scanf("%d %d %lf",&a,&b,&c); //pega os valores de entrada

    d=b*c;//calcula o salário

    printf("NUMBER = %d\n",a);//imprime o número do funcionário
    printf("SALARY = U$ %.2lf\n",d);//imprime o salário com 2 casas decimais

    return 0;//indica que o programa terminou com sucesso
}
