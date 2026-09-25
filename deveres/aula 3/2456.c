#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if(n1<n2){
        if(n2<n3){
            if(n3<n4){
                if(n4<n5){
                    printf("C\n");
                }else
                    printf("N\n");
            }else
                printf("N\n");
        }else
            printf("N\n");
    }else if(n1>n2){
        if(n2>n3){
            if(n3>n4){
                if(n4>n5){
                    printf("D\n");
                }else
                    printf("N\n");
            }else
                printf("N\n");
        }else
            printf("N\n");
    }else
        printf("N\n");
}
