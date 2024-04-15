#include <stdio.h>

int main(){

    int N;
    while(scanf("%d",&N) != EOF){
        int matriz[N][N];
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                if(i == j){
                    matriz[i][j] = 2;
                }
                else if(i + j == N - 1){
                    matriz[i][j] = 3;
                }
                else{
                    matriz[i][j] = 0;
                }
            }  
        }
        int one = N/3;
        int end = N - one;
        for(int i = one; i < end; ++i){
            for(int j = one; j < end; ++j){
                matriz[i][j] = 1;
            }

        }
        matriz[N/2][N/2] = 4;

        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                printf("%d",matriz[i][j]);
            }
        printf("\n");
        }
        printf("\n");

    }

}
