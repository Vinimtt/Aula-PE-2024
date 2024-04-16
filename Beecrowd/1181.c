#include <stdio.h>

int main(){
    int L;
    float resultado = 0;
    scanf("%d",&L);
    char T;
    scanf(" %c",&T);

    float matriz[12][12];
    for(int i = 0; i < 12; ++i){
        for(int j = 0; j < 12; ++j){
            scanf("%f",&matriz[i][j]);
            if(i == L){
                resultado += matriz[i][j];
            }
        }
    }
    if(T == 'S'){
        printf("%.1f\n",resultado);
    }
    else if(T == 'M'){
        printf("%.1f\n",(resultado/12.0));
    }

}
