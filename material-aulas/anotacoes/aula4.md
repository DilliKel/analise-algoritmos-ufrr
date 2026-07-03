# lições de casa

## análise de tempo dos algoritmos insertion sort, bubble sort e selectionsort

### mas primeiro irei reconceituar os algoritmos de ordenação:

esses 3 algoritmos são métodos clássicos de ordenação de elementos em uma lista. Eles são relativamente simples de entender e implementar, mas podem ser ineficientes em grandes conjuntos de dados.

#### insertion sort

O algoritmo de Insertion Sort é um algoritmo de ordenação que percorre uma lista de elementos e insere cada elemento em sua posição correta na parte já ordenada da lista. Esse processo é repetido até que todos os elementos da lista estejam na posição correta, resultando em uma lista ordenada.

O algoritmo de Insertion Sort é implementado com um laço externo que percorre a lista a ser ordenada, começando do segundo elemento e indo até o último. Para cada elemento, o algoritmo realiza um laço interno que percorre a parte já ordenada da lista, do final para o início, e insere o elemento na posição correta.

O processo de inserção é realizado comparando o elemento atual com o elemento anterior na lista já ordenada. Se o elemento atual for menor que o elemento anterior, os dois elementos são trocados. Esse processo de comparação e troca é repetido até que o elemento atual encontre a sua posição correta na lista já ordenada.

O Insertion Sort é um pouco mais eficiente que o Bubble Sort, mas ainda pode ser ineficiente para listas muito grandes. Sua complexidade de tempo é O(n^2), o que significa que o tempo de execução cresce exponencialmente com o tamanho da lista.

exemplo em pseudo-código:

```
insertionSort(lista):
n = tamanho(lista)
para i de 1 até n-1:
  chave = lista[i]
  j = i-1
  enquanto j >= 0 e lista[j] > chave:
    lista[j+1] = lista[j]
    j = j-1
  lista[j+1] = chave
retornar lista
```

#### bubble sort

O algoritmo de Bubble Sort é um algoritmo de ordenação que percorre a lista várias vezes, comparando cada elemento com o seu vizinho e trocando de posição caso esteja fora de ordem. Esse processo é repetido até que nenhum elemento precise mais ser trocado de posição, resultando em uma lista ordenada.

O algoritmo de Bubble Sort é implementado com um laço externo que percorre a lista a ser ordenada, comparando cada elemento com o seu vizinho imediato e trocando de posição se necessário. Esse processo é repetido até que todos os elementos da lista estejam na posição correta.

Durante cada iteração do laço externo, o algoritmo percorre a lista com um laço interno, comparando o elemento atual com o seu vizinho imediato e trocando de posição se o elemento atual for maior que o seu vizinho. Esse processo é repetido até que o final da lista seja alcançado.

O processo de troca de posições é realizado comparando o elemento atual com o seu vizinho imediato. Se o elemento atual for maior que o seu vizinho, os dois elementos são trocados de posição. Esse processo de comparação e troca é repetido até que a lista esteja completamente ordenada.

Embora seja fácil de entender e implementar, o Bubble Sort é um algoritmo ineficiente, especialmente para listas grandes. Sua complexidade de tempo é O(n^2), o que significa que o tempo de execução cresce exponencialmente com o tamanho da lista.

exemplo em pseudo-código:

```
bubbleSort(lista):
n = tamanho(lista)
para i de 0 até n-1:
  para j de 0 até n-i-1:
    se lista[j] > lista[j+1]:
      trocar(lista[j], lista[j+1])
retornar lista

função trocar(a, b)
temp = a
a = b
b = temp
fim função
```

#### selection sort

O algoritmo de Selection Sort é um algoritmo de ordenação que seleciona o menor elemento da lista e o coloca na primeira posição, o segundo menor elemento é colocado na segunda posição, e assim sucessivamente. Esse processo é repetido até que todos os elementos da lista estejam na posição correta, resultando em uma lista ordenada.

O algoritmo de Selection Sort é implementado com um laço externo que percorre a lista a ser ordenada, selecionando o menor elemento e colocando-o na primeira posição da lista. Em seguida, o laço externo avança para a próxima posição e repete o processo, selecionando o menor elemento na parte restante da lista e colocando-o na posição correta.

O processo de seleção é realizado comparando cada elemento da lista com o menor elemento encontrado até o momento. Se um elemento for encontrado que seja menor que o menor elemento atual, ele se torna o novo menor elemento. Esse processo de comparação é repetido até que o menor elemento da lista seja encontrado. Depois de encontrar o menor elemento, ele é colocado na posição correta na lista, e o processo de seleção continua para o restante da lista.

O Selection Sort é mais eficiente que o Bubble Sort e o Insertion Sort, mas ainda pode ser ineficiente para listas muito grandes. Sua complexidade de tempo também é O(n^2).

exemplo em pseudo-código:

```
selectionSort(lista):
n = tamanho(lista)
para i de 0 até n-1:
    indice_minimo = i
    para j de i+1 até n-1:
    se lista[j] < lista[indice_minimo]:
        indice_minimo = j
    se indice_minimo != i:
    trocar(lista[i], lista[indice_minimo])
retornar lista

função trocar(a, b)
temp = a
a = b
b = temp
fim função
```

### comparativos de velocidade entre os 3 algoritmos supracitados:

| Algoritmo | Melhor caso | Pior caso | Caso médio | Estabilidade |
|---|---|---|---|---|
| Bubble Sort | O(n) | O(n^2) | O(n^2) | Estável |
| Insertion Sort | O(n) | O(n^2) | O(n^2) | Estável |
| Selection Sort | O(n^2) | O(n^2) | O(n^2) | Não Estável |

O melhor caso para o Bubble Sort e o Insertion Sort ocorre quando a lista a ser ordenada já está ordenada ou quase ordenada, resultando em um tempo de execução de O(n), onde n é o número de elementos na lista. O pior caso para ambos os algoritmos ocorre quando a lista está completamente desordenada, resultando em um tempo de execução de O(n^2).

O melhor caso para o Selection Sort ocorre quando a lista está completamente desordenada, resultando em um tempo de execução de O(n^2), que é o mesmo que o pior caso para o algoritmo. O pior caso também ocorre quando a lista está completamente desordenada, resultando em um tempo de execução de O(n^2).

## Anotações da aula 20/03/23:

### Notação Assintótica

é a forma como nós trabalhamos a análise de algoritmos de um ponto de vista imparcial, onde avaliamos algoritmos com base em seu desempenho de tempo (não atrelado a segundos)

#### como se analisa um algoritmo

- tempo de cpu
- modelo matemático -- F(N)

#### quando um algoritmo é assintoticamente firme?

é quando um algoritmo mantém uma taxa de desempenho estável mesmo quando o tamanho de um problema aumenta significativamente.

por exemplo um algoritmo assintoticamente firme tem seu tempo de execução em uma taxa de crescimento muito mais lenta do que o tamanho do problema (entrada).

Por exemplo, um algoritmo de ordenação que tem um tempo de execução de O(nlogn) é considerado assintoticamente firme, pois o tempo de execução cresce apenas ligeiramente mais rápido do que o tamanho da entrada (n), mesmo para tamanhos de entrada muito grandes.

#### tipos de notação

##### BIG O

é usado para delimitar o limite superior em relação ao tempo. ex: no pior caso meu algoritmo tem O(n²)

REGRA DA SOMA: O(f(n)) + O(g(n))
- Suponha 3 trechos de programas cujos tempos de execução sejam O(n), O(n²) e O(nlogn).
- O tempo de execução dos 2 primeiros trechos é O(max(n,n²)), que é O(n²).
- O tempo de execução de todos os 3 trechos é, então, O(max(n², nlogn)), que é O(n²)

##### Notação little O

O limite assintótico superior definido pela notação O pode ser assintoticamente firme ou não.

EXEMPLO:
- O limite 2n² = O(n²) é assintoticamente firme
- O limite 2n = O(n²) não é assintoticamente firme

A notação o é usada para definir um limite superior que não é assintoticamente firme.

##### Notação theta

- f(n) = Θ(g(n))
- Lê-se f(n) é da mesma ordem de g(n).
- Θ limita a função por fatores constantes.
- g(n) é um limite assintótico superior e inferior para f(n), ou
- g(n) é um limite assintótico firme para f(n).

##### Notação ômega

- f(n) = Ω(g(n))
- Lê-se f(n) é de ordem no mínimo g(n)
- Ω define um limite inferior para a função, por um fator constante.
- f(n) é um limite assintótico inferior para g(n)

##### Notação little ômega

O limite assintótico inferior definido pela notação ω pode ser assintoticamente firme ou não.

EXEMPLO:
- O limite 2n² = ω(n²) é assintoticamente firme
- O limite 2n² = ω(n) não é assintoticamente firme

A notação ω é usada para definir um limite inferior que não é assintoticamente firme.

### instancia de problema

A = {1,5,2,3} = #16 -- o limite do problema tende ao infinito
int = Z
Aº = {1,2,3,5}

### para que serve uma estrutura de dados

serve para organizar dados, manipular etc -- formente ligado ás politicas de uso de dados

são divididas em 3:
- encadeadas
- arvores
- grafos

### ordem de crescimento

N entradas para T tempos de execução

para se executar certas entradas, leva-se certo tempo para executar

#### FUNÇÃO DE CRESCIMENTO DE TEMPO EM RELAÇÃO A ENTRADA DE UM ALGORITMO

CADA ALGORITMO TEM UMA ESTRATÉGIA PROPRIA PARA RESOLVER UM PROBLEMA

## REVISAO DE MATEMATICA!!!

propriedades:
- limites
- !!!!logaritmos!!!!
- exponenciais
- pa
- pg
- !!!!somatorio!!!!
- pseudo-código
