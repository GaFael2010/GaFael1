#include <stdio.h>



int main(){
  int b,n,m, c=0;
  scanf("%d%d%d",&b,&n,&m);
  
  int g[n],h[m];//cartas obejetivas, compradas
  
  for(int i = 0 ; i<n ; i++){
      scanf("%d",&g[i]);//carrega os vetores 
      
  }
  for (int i = 0; i< m;i++){
      scanf("%d",&h[i]);
  }
  
  
  for(int i = 0; i<n ;i++){//compara os 2 valores 
      for(int j = 0; j<m;j++ ){
          
          if(g[i]==h[j] && g[i]!=0){
              
              c++;//conta as que foram emcontradas
              g[i]=0;
          }
      }
  }
    
    printf("%d\n",n-c);//calcula quantas falatm 
    
    
    return 0;
}
