#include <stdio.h>

int main() {
    int n, x, y, u, aux,aux2, s;
    char l;
    while (scanf("%d", &n) != EOF) {
        s = 0;
        y = 0;
        u = 0;

        int d[10001],e[10001];// 10^4 casos possiveis ent criar com TODAS as casa de texte :)
    
        for(int i=0;i<n;i++){
            scanf("%d %c", &x, &l);

            if(l == 'D'){
                d[y] = x;
                y++;

            } else {
                e[u] = x;
                u++;
            }
        }
    

        for (int i=0;i<y;i++){
            aux=d[i];
            for(int j=0;j<u;j++){
                aux2=e[j];
                if(aux==aux2){
                    s++;
                    e[j]=0;
                    break;
                }
        }
    }
    printf("%d\n", s);
    }
    return 0;
}
