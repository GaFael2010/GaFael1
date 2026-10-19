

#include <stdio.h>

int main(){
	
    
	//LEitura de relatorios
	int a,b, o=0,p=0;
    
    scanf("%d",&a);
    
    int m[a];
    
    for(int i=0; i<a; i++){
        scanf("%d",&b);
        
        if(b!=0){
            m[o]=b;
            o++;
        }else{
        	p++;
		}
    }
    
    if(p!=a){
	
    for(int i=0;i<o;i++){
        
        printf("%d",m[i]);
    }
	}else{
		 printf("0");
	}
	

	

	
	
}
