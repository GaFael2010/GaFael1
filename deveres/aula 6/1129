#include <stdio.h>

int main(){

    int n, a, b, v;
    char m[5] = {'A', 'B', 'C', 'D', 'E'};

    while(scanf("%d", &n) == 1 && n != 0){

        for(int i = 0; i < n; i++){

            v = 0;

            for(int j = 0; j < 5; j++){

                scanf("%d", &a);

                if(a <= 127){
                    b = j;
                    v++;
                }

            }

            if(v == 1){
                printf("%c\n", m[b]);
            }else{
                printf("*\n");
            }

        }
    }

    return 0;
}
