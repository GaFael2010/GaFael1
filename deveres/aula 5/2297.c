

#include <stdio.h>

int main()

{
    int n=0,a,b,c,aux1,aux2, h=0;
    
    while(c!=0){
    scanf("%d",&c);
    n++;
    aux1=0;
    aux2=0;
    
    if(c==0){
        c=1;
        break;
    }
    
    for(int i=0; i<c; i++){
        scanf("%d%d", &a,&b);
        
        aux1+=a;
        aux2+=b;
    }

    printf("Teste %d\n",n);
    
    
    if(aux1>aux2){
        printf("Aldo\n");
    }else{
        printf("Beto\n");
    }
    
    }

    return 0;
}
