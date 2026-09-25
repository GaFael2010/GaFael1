#include <stdio.h>

int main(){
    int s,t, f , n1, n2;
    scanf("%d %d %d", &s, &t, &f);

    n1=s+t;
    if(n1==24 || n1==0){
        printf("0\n");
    }
    else if(n1>=24){
        n1=n1-24;
        n2=n1+f;
         if(n2>=24){
            n2=n2-24;
            printf("%d\n", n2);
        }
         else{
            printf("%d\n", n2);
        }
    }
    else if(n1<0){
        n1=n1+24;
        n2=n1+f;
        if(n2>=24){
            n2=n2-24;
            printf("%d\n", n2);
        }
         else{
            printf("%d\n", n2);
        }
    }
    else{
        n2=n1+f;
        if(n2>=24){
            n2=n2-24;
            printf("%d\n", n2);
        }
         else if(n2<0){
            n2=n2+24;
            printf("%d\n", n2);
        }
         else{
            printf("%d\n", n2);
        }
    }

}
