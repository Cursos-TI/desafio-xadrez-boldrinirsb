#include <stdio.h>

/**
 * Move a Torre recursivamente.
 * passos_restantes = O número de casas que ainda faltam mover.
 */
void moverTorreRecursivo(int passos_restantes) {
    
    // Se não houver mais passos, a função para de se chamar.
    if (passos_restantes <= 0) {
        return; // Encerra a recursão
    }
    
    
    // Imprime o movimento ANTES da próxima chamada.
    printf("Torre: Direita\n");
    
    
    // Chamada Recursiva.
    moverTorreRecursivo(passos_restantes - 1);
}

/**
 * Move a Rainha recursivamente.
 * passos_restantes = O número de casas que ainda faltam mover.
 */
void moverRainhaRecursivo(int passos_restantes) {
    // Se não houver mais passos, a função para de se chamar.
    if (passos_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento ANTES da próxima chamada.
    printf("Rainha: Esquerda\n");
    
    // Chamada Recursiva.
    moverRainhaRecursivo(passos_restantes - 1);
}

/**
 * Move o Bispo recursivamente.
 * passos_restantes = O número de casas que ainda faltam mover.
 */
void moverBispoRecursivo(int passos_restantes) {
    // Se não houver mais passos, a função para de se chamar.
    if (passos_restantes <= 0) {
        return;
    }
    
    // Imprime o movimento ANTES da próxima chamada.
    printf("Bispo: Cima, Direita\n");
    
    // Chamada Recursiva
    moverBispoRecursivo(passos_restantes - 1);
}


/*
FUNÇÃO PRINCIPAL (main)
 */

int main() {
    
    
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;
    const int CASAS_BISPO = 5;
    const int CAVALO_CIMA = 2;
    const int CAVALO_DIREITA = 1;

    // --- 1. Chamada da Torre ---
    printf("--- Movimento da Torre ---\n");
    moverTorreRecursivo(CASAS_TORRE);
    printf("\n----------------------------------------\n\n");

    // --- 2. Chamada da Rainha ---
    printf("--- Movimento da Rainha ---\n");
    moverRainhaRecursivo(CASAS_RAINHA);
    printf("\n----------------------------------------\n\n");
    
    // --- 3. Chamada do Bispo ---
    // (Cumprindo a primeira parte do requisito do Bispo)
    printf("--- Movimento do Bispo ---\n");
    moverBispoRecursivo(CASAS_BISPO);
    printf("\n----------------------------------------\n\n");

    // --- 4. Implementação do Bispo (Loops Aninhados) ---
    // (Cumprindo a segunda parte do requisito do Bispo)
    // Requisito: "loop mais externo vertical, mais interno horizontal"
    // Para simular 5 passos na diagonal (Cima, Direita), vamos
    // varrer um grid 5x5 e imprimir apenas quando y == x.
    
    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    int y_bispo, x_bispo;
    
    // Loop externo (Vertical)
    for (y_bispo = 1; y_bispo <= CASAS_BISPO; y_bispo++) {
        
        // Loop interno (Horizontal)
        for (x_bispo = 1; x_bispo <= CASAS_BISPO; x_bispo++) {
            
            // O Bispo só se move na diagonal.
            // Imprimir apenas quando as coordenadas forem iguais (y == x)
            // para simular o movimento (1,1), (2,2), (3,3), etc.
            if (y_bispo == x_bispo) {
                printf("Bispo: Cima, Direita\n");
            }
            // O loop interno continua varrendo a linha, mas não imprime
            // se não estiver na diagonal.
        }
    }
    printf("\n----------------------------------------\n\n");

    // --- 5. Implementação do Cavalo (Loops Complexos) ---
    // Requisito: "duas casas para cima e uma para a direita"
    // Usando loop aninhado com 'continue' e múltiplas variáveis.
    
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    
    // Loop externo (FOR) com MÚLTIPLAS VARIÁVEIS:
    // 'y' controla os passos para cima (1 até 2)
    // 'passo_atual' conta o total de movimentos (1 até 3)
    // ATUALIZAÇÃO COMPLEXA: ambos são incrementados
    
    int y_cavalo, passo_atual;
    for (y_cavalo = 1, passo_atual = 1; y_cavalo <= CAVALO_CIMA; y_cavalo++, passo_atual++) {
        
        // Executa o movimento vertical
        printf("Cavalo: Cima\n");
        
        // Se NÃO for a última volta vertical (y != 2),
        // não precisamos do loop aninhado ainda.
        if (y_cavalo != CAVALO_CIMA) {
            continue; // Pula o resto do código e vai para a próxima iteração do 'for'
        }
        
        // Loop aninhado (WHILE)
        // Este bloco só é alcançado na última iteração do 'for' (y == 2)
        int x_cavalo = 1;
        while (x_cavalo <= CAVALO_DIREITA) {
            passo_atual++; // O contador de passos continua
            printf("Cavalo: Direita\n");
            x_cavalo++;
        }
    }

    printf("\n----------------------------------------\n\n");
    printf("Simulação de movimentos complexos concluída.\n");
    
    return 0;
}