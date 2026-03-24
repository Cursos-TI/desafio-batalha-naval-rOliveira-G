#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.



    int tabuleiro[10][10];

    // Preenche o oceano com 0
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha][coluna] = 0;
        }
    }

    // ----- NAVIO HORIZONTAL -----
    int linhaH = 2;
    int colunaH = 4;
    int tamanho = 3;

    if(colunaH + tamanho <= 10){   // verifica se cabe no tabuleiro

        int podeColocar = 1;

        // verifica se há outro navio no caminho
        for(int i = 0; i < tamanho; i++){
            if(tabuleiro[linhaH][colunaH + i] != 0){
                podeColocar = 0;
            }
        }

        // se estiver livre, posiciona
        if(podeColocar){
            for(int i = 0; i < tamanho; i++){
                tabuleiro[linhaH][colunaH + i] = 3;
            }
        }
        else{
            printf("Nao foi possivel posicionar o navio horizontal: espaco ocupado\n");
        }
    }
    else{
        printf("Navio horizontal fora do tabuleiro\n");
    }

    // ----- NAVIO VERTICAL -----
    int linhaV = 1;
    int colunaV = 8;

    if(linhaV + tamanho <= 10){   // verifica limites

        int podeColocar = 1;

        for(int i = 0; i < tamanho; i++){
            if(tabuleiro[linhaV + i][colunaV] != 0){
                podeColocar = 0;
            }
        }

        if(podeColocar){
            for(int i = 0; i < tamanho; i++){
                tabuleiro[linhaV + i][colunaV] = 3;
            }
        }
        else{
            printf("Nao foi possivel posicionar o navio vertical: espaco ocupado\n");
        }
    }
    else{
        printf("Navio vertical fora do tabuleiro\n");
    }

    // ----- NAVIO DIAGONAL -----
    int linhaD =3, colunaD =2;
    if(linhaD + tamanho <=10 && colunaD + tamanho <= 10){
        int podeColocar = 1;
        for(int i = 0; i < tamanho; i++){
            if(tabuleiro[linhaD + i][colunaD + i] != 0){
                podeColocar = 0;
            }
        }
        if(podeColocar){
            for(int i = 0; i < tamanho; i++){
                tabuleiro[linhaD + i][colunaD + i] = 3;
            }
        }
        
        
    }
    // ----- NAVIO DIAGONAL 2 -----
    int linhaD2 = 5;
    int colunaD2 = 7;

    if(linhaD2 + tamanho <= 10 && colunaD2 - tamanho + 1 >= 0){

        int podeColocar = 1;

        for(int i = 0; i < tamanho; i++){
            if(tabuleiro[linhaD2 + i][colunaD2 - i] != 0){
                podeColocar = 0;
            }
        }

        if(podeColocar){
            for(int i = 0; i < tamanho; i++){
                tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
            }
        }
    }


    // ----- EXIBE O TABULEIRO -----
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            printf("| %d ", tabuleiro[linha][coluna]);
        }
        printf("|\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
