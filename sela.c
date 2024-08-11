

# include <stdio.h>
# define MAX 100

int inserir_numeros(){
    int l, c ;
    scanf("%d %d", &l, &c);
    return l, c;
}

int inserir_matriz(double Matriz[][MAX], int l, int c){ 
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%lf", &Matriz[i][j]);
        }
    }
    return 0;
}

int ponto_de_sela(double Matriz[][MAX], int l, int c){
    double min;
    double max;
    int posicao_da_linha;
    int posicao_da_coluna;

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            double min = 0;
            int posicao_da_linha = 0;
        
            if (Matriz[i][j] < Matriz[i+1][j]){
                min = Matriz[i][j];
                posicao_da_linha = i;
            }

            else {
                min = Matriz[i+1][j];
                posicao_da_coluna = i+1;

            }
    
            double max = 0;
            int posicao_da_coluna = 0;

            if(Matriz[i][j] > Matriz[i][j+1]){
                max = Matriz[i][j];
                posicao_da_coluna =j;
                }

            else {
                max = Matriz[i][j+1];
                posicao_da_coluna = j+1;
                }

                }
    }
    
    return posicao_da_coluna, posicao_da_linha, min, max;
    
    }

int print(double Matriz[][MAX], int posicao_da_linha, int posicao_da_coluna, double max, double min) {
    if (max == min)
        printf("(%dposicao_da_linha,%dposicao_da_coluna) é ponto de sela com valor min%d\n", posicao_da_linha, posicao_da_coluna, min);

    else
    printf("nao existe ponto de sela\n");

    return 0;

}




