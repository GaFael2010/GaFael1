#include <stdio.h>


int main(){
    double n,a,l,p;

    scanf("%lf %lf %lf %lf", &n, &a, &l, &p);

    if(n<=l && n<=p && n<=a)
        printf("S\n");

    else
        printf("N\n");
}
