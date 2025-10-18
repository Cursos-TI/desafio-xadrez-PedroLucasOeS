// Desafio de Xadrez Mestre

#include <stdio.h>

// Função recursiva para movimento da Torre (direita)
void moverTorre(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Direita\n"); 
    moverTorre(casas_restantes - 1);
}

// Função recursiva para movimento do Bispo (diagonal superior direita)
void moverBispo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    moverBispo(casas_restantes - 1);
}

// Função recursiva para movimento da Rainha (esquerda)
void moverRainha(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1);
}

int main() {
    // MOVIMENTO DA TORRE - Recursividade
    printf("Movimento da Torre (Recursivo):\n");
    int casas_torre = 5;
    moverTorre(casas_torre);
    
    printf("\n");
    
    // MOVIMENTO DO BISPO - Recursividade + Loops Aninhados
    printf("Movimento do Bispo (Recursivo):\n");
    int casas_bispo = 5; 
    moverBispo(casas_bispo); 
    
    printf("\n"); 

    // MOVIMENTO DA RAINHA - Recursividade
    printf("Movimento da Rainha (Recursivo):\n");
    int casas_rainha = 8; 
    moverRainha(casas_rainha); 
    
    printf("\n"); 
    
    // MOVIMENTO DO BISPO COM LOOPS ANINHADOS
    printf("Movimento do Bispo (Loops Aninhados):\n");
    int casas_bispo_aninhado = 5; 
    
    // Loops aninhados para movimento diagonal do Bispo
    for (int vertical = 1; vertical <= casas_bispo_aninhado; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    
    printf("\n"); 
    
    // MOVIMENTO DO CAVALO - Loops Complexos Aninhados
    printf("Movimento do Cavalo (Loops Complexos):\n");
    
    // Definindo os parâmetros do movimento em "L" do Cavalo
    int movimento_vertical = 2;   
    int movimento_horizontal = 1; 
    
    // VARIÁVEIS MÚLTIPLAS PARA CONTROLE COMPLEXO DOS LOOPS
    int tentativas = 0;
    const int MAX_TENTATIVAS = 3;
    
    // LOOP COMPLEXO ANINHADO COM MÚLTIPLAS VARIÁVEIS E CONDIÇÕES
    for (int etapa = 1; etapa <= 2; etapa++) {
        if (etapa == 1) {
            int casa_vertical = 1;
            while (casa_vertical <= movimento_vertical) {
                tentativas++;
                if (tentativas > MAX_TENTATIVAS) {
                    printf("*** Segurança: Limite de tentativas excedido ***\n");
                    break; 
                }
                
                if (casa_vertical == 1) {
                    printf("Primeiro movimento vertical:\n");
                }
                printf("Cima\n");
                casa_vertical++;
            }
        }
        
        else if (etapa == 2) {
            int casa_horizontal = 1;
            do {
                printf("Direita\n"); 
                casa_horizontal++;
                if (casa_horizontal > movimento_horizontal) {
                    break;
                }
            } while (casa_horizontal <= movimento_horizontal);
        }
    }
    
    return 0;
}
