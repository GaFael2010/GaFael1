#include<stdio.h>
double a,b,c,n1,n2,n3;
int triangulos(){
    if(n1>=n2+n3){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(n1*n1 == n2*n2 + n3*n3){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(n1*n1 > n2*n2 + n3*n3){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(n1*n1 < n2*n2 + n3*n3){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(n1==n2 && n2==n3){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((n1==n2 && n2!=n3) || (n1==n3 && n3!=n2) || (n2==n3 && n3!=n1)){
        printf("TRIANGULO ISOSCELES\n");
    }

}


int main(){


    scanf("%lf%lf%lf",&a,&b,&c);


    if(a>b && a>c){
        n1=a;
        n2=b;
        n3=c;
        triangulos();
    }else if(b>a && b>c){
        n1=b;
        n2=a;
        n3=c;
        triangulos();
    }else if(c>a && c>b){
        n1=c;
        n2=a;
        n3=b;
        triangulos();
    }else{
        n1=a;
        n2=b;
        n3=c;
        triangulos();
    }

    

    return 0;



}
