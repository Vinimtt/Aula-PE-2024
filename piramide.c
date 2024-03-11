#include <stdio.h>

int input(){
    int x;
    printf("Informe as linhas: ");
    scanf("%d",&x);
    return x;
}
void main(){
    int x,i,j;
    x=input();
    for(i=1;i<=x;++i){
        for(j=1;j<=x*2-1;++j){
            if(j<=x-i || j>=x+i){
                printf(" ");
            }else{
                printf("0");
            }
        }
    printf("\n");
    }       
}