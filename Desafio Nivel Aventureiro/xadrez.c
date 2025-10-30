#include <stdio.h>

int main() {
    
    // --- 1. Torre ---
    // Estrutura: loop FOR
    printf("--- Movimento da Torre ---\n");
    
    int i; 
    const int casas_torre = 5; 

    for (i = 1; i <= casas_torre; i++) {
        printf("Torre moveu (passo %d): Direita\n", i);
    }
    
    printf("\n--------------------------------------------------\n\n");

    // --- 2. Bispo ---
    // Estrutura: loop DO-WHILE
    printf("--- Movimento do Bispo (5 casas Cima, Direita) ---\n");
    
    int j = 1; 
    const int casas_bispo = 5;

    do {
        printf("Bispo moveu (passo %d): Cima, Direita\n", j);
        j++; 
    } while (j <= casas_bispo); 
    
    printf("\n--------------------------------------------------\n\n");

    // --- 3. Rainha ---
    // Estrutura: loop WHILE
    printf("--- Movimento da Rainha ---\n");

    int k = 1; 
    const int casas_rainha = 8;

    while (k <= casas_rainha) {
        printf("Rainha moveu (passo %d): Esquerda\n", k);
        k++; 
    }
    
    printf("\n--------------------------------------------------\n\n");

    // --- 4. Cavalo ---
    // Movimento: 2 casas para Baixo, 1 para Esquerda
    // Estrutura: Loops Aninhados (FOR e WHILE)
    
    printf("--- Movimento do Cavalo ---\n");

    // Requisitos: 2 passos para baixo, 1 passo para esquerda.
    const int passos_verticais = 2;
    const int passos_horizontais = 1;

    // Loop externo (FOR) - Para os 2 passos verticais.
    // Usei 'i_cavalo' para evitar conflito com o 'i' da Torre.
    int i_cavalo;
    for (i_cavalo = 1; i_cavalo <= passos_verticais; i_cavalo++) {
        
        // 1. O cavalo se move para baixo
        printf("Cavalo moveu (passo %d): Baixo\n", i_cavalo);

        // 2. Lógica de controle para o aninhamento:
        // O loop aninhado (o passo para esquerda) 
        // executa APENAS na ÚLTIMA volta do loop 'for'.
        if (i_cavalo == passos_verticais) {
            
            // Loop interno (WHILE) - Para o 1 passo horizontal.
            
            int j_cavalo = 1; // Contador do loop interno
            
            while (j_cavalo <= passos_horizontais) {
                printf("Cavalo moveu (passo %d): Esquerda\n", (i_cavalo + j_cavalo));
                j_cavalo++; // Incrementa o contador do loop interno
            }
        }
    } // Fim do loop 'for'

    printf("\n--------------------------------------------------\n\n");
    printf("Simulação de movimentos concluída.\n");

    return 0;
}

