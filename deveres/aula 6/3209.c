#include <stdio.h>

int main(){
  int n,k,o,l;
  n=k=o=l=0;
  
    scanf("%d",&n);//numero de repetiçoes 
      
    for (int i = 0; i<n ; i++){
        scanf("%d",&k);// numero de estenções 
        l=0;//reseta o numerno total de tomadas 
          
          
        for (int j = 0;j<k;j++){
            scanf("%d",&o);//numero de tomadas em cada extenção
            
            if(j==k-1){//a utima extenção tem todas as tomadas livres 
                l+=o;
                
            }else{//a extenção tem -1 tomanda disponivel
                l+=o-1;
            }
        }
      printf("%d\n",l);
    }
 
 return 0;
}
 
