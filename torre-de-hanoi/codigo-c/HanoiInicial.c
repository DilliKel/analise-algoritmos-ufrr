#include <stdio.h>
#include <time.h>

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n > 0) {
        hanoi(n - 1, origem, auxiliar, destino);
        printf("Mover disco %d de %c para %c\n", n, origem, destino);
        hanoi(n - 1, auxiliar, destino, origem);
    }
} 

int main() {
    int n = 32; // número de discos
    char origem = 'A', destino = 'C', auxiliar = 'B';
    
    clock_t start = clock(); // começa a contar o tempo de execução
    hanoi(n, origem, destino, auxiliar);
    clock_t end = clock(); // termina de contar o tempo de execução
    
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %f segundos", time_spent);
    
    return 0;
}
