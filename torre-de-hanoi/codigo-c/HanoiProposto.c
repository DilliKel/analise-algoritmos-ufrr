#include <stdio.h>
#include <time.h>
// Função que implementa a solução recursiva para a Torre de Hanoi
void hanoi(int n, char origem, char destino, char auxiliar) {
    // Caso base, mova o disco 1 da origem para o destino
    if (n == 1) {
        printf("Mova o disco 1 da haste %c para a haste %c.\n", origem, destino);
        return;
    }
    // Mova os n-1 discos superiores para a haste auxiliar
    hanoi(n-1, origem, auxiliar, destino);
    // Mova o disco n da origem para o destino
    printf("Mova o disco %d da haste %c para a haste %c.\n", n, origem, destino);
    // Mova os n-1 discos superiores da haste auxiliar para o destino
    hanoi(n-1, auxiliar, destino, origem);
}
int main() {
    int n;
    clock_t t; // Variável para armazenar o tempo de execução
    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    t = clock(); // Inicia a contagem de tempo
    hanoi(n, 'A', 'C', 'B');
    t = clock() - t; // Finaliza a contagem de tempo e armazena a diferença
    // Exibe o tempo de execução em segundos
    printf("\nTempo de execucao: %f segundos.\n", ((double)t)/CLOCKS_PER_SEC);
    // Exibe o número de movimentos realizados para solucionar a torre
    return 0;
}
