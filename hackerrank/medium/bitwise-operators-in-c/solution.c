#include<stdio.h>
int main(){
    int p,q;
int max_and = 0,max_or = 0 , max_xor = 0;
scanf("%d %d",&p,&q);
for (int a=1;a<=p;a++){
    for(int b=a+1;b<=p;b++){
        int x =a &b;
        int y = a|b;
        int z = a^b;
    
        if (x < q && x > max_and) max_and =x ;
        if (y < q && y > max_or) max_or =y;
        if( z < q && z > max_xor) max_xor=z;
        
    }
}
printf("%d\n%d\n%d",max_and,max_or,max_xor);
return 0;
}
