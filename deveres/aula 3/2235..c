#include <stdio.h>

int main(){
    int a,b,c,f,p;
    scanf("%d %d %d", &a, &b, &c);




    if(a==c || a==b || b==c || a+c==b || a+b==c || b+c==a){
        printf("S\n");
    }else{
        printf("N\n");
    }
}
