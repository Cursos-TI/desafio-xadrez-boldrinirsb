
#include <stdio.h>

int main() {
    
    // --- 1. Torre ---
    // Movimento: 5 casas para a Direita
    // Estrutura: loop FOR
    
    
    printf("--- Movimento da Torre ---\n");
    
    int i; // Variável de controle 
    const int casas_torre = 5; // Requisito

    // Loop 'for'
    // 1. Inicializa i = 1
    // 2. Continua ENQUANTO i <= 5
    // 3. Incrementa i (i++) a cada volta
    for (i = 1; i <= casas_torre; i++) {
        // Imprime a direção a cada casa percorrida
        printf("Torre moveu (passo %d): Direita\n", i);
    }
    
    
    printf("\n--------------------------------------------------\n\n");

    // --- 2. Bispo ---
    // Movimento: 5 casas na diagonal (Cima, Direita)
    // Estrutura: loop DO-WHILE

    
    printf("--- Movimento do Bispo ---\n");
    
    int j = 1; // Contador inicializado fora do loop
    const int casas_bispo = 5;

    // Loop 'do-while'
    do {
        // 1. EXECUTA o bloco primeiro
        printf("Bispo moveu (passo %d): Cima, Direita\n", j);
        
        j++; // Incrementa o contador
        
    } while (j <= casas_bispo); // 2. VERIFICA a condição no final
    
    printf("\n--------------------------------------------------\n\n");

    // --- 3. Rainha ---
    // Movimento: 8 casas para a Esquerda
    // Estrutura: loop WHILE
    
    
    printf("--- Movimento da Rainha ---\n");

    int k = 1; // Contador inicializado fora
    const int casas_rainha = 8;

    // Loop 'while'
    // 1. VERIFICA a condição primeiro (k <= 8)
    while (k <= casas_rainha) {
        
        // 2. EXECUTA o bloco (se a condição for verdadeira)
        printf("Rainha moveu (passo %d): Esquerda\n", k);
        
        k++; // Incrementa o contador dentro do loop
    }
    
    printf("\n--------------------------------------------------\n\n");
    printf("Simulação de movimentos concluída.\n");

    return 0;
}