#include <stdio.h>
 
int main() {
 
    float a,b,c,d,n1,n2,n3,n4;

    scanf("%f%f%f%f",&a,&b,&c,&d);

    n1=(a*2+b*3+c*4+d*1)/10;

    printf("Media: %.1f\n",n1);
    if(n1>=7) {
    
        printf("Aluno aprovado.\n");
    }
    else if(n1<5) {
        printf("Aluno reprovado.\n");
    }
    else if(n1>=5 && n1<=6.9) {
        printf("Aluno em exame.\n");
        scanf("%f",&n2);
        printf("Nota do exame: %.1f\n",n2);
        n3=(n1+n2)/2;
        if(n3>=5) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",n3);
        }
        else {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",n3);
        }
    }
 
    return 0;
}
