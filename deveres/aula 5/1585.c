#include <stdio.h>

int main()
{
    int n,x,y,a;
    
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        a=(x*y)/2;
        printf("%d cm2\n",a);
    }
    
}
