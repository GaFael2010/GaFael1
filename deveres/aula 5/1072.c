#include <stdio.h>

int main(){

    int x, y, d=0,f=0;

    scanf("%d", &x);

    for (int i=0; i<x; i++){
        scanf("%d", &y);

        if (y>=10 && y<=20){
            d++;
        }else{
            f++;
        }
    }

    printf("%d in\n", d);
    printf("%d out\n", f);

    return 0;
}
