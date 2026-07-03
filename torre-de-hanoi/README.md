# Torre de Hanói — Análise de Complexidade

| | |
|---|---|
| 📚 Disciplina | DCC606 — Análise de Algoritmos |
| 👨‍🏫 Professor | [Herbert Oliveira Rocha](https://github.com/hbgit) |
| 🏛️ Universidade | Universidade Federal de Roraima (UFRR) |
| 📅 Semestre | 2023.1 |
| 👤 Autor | Kelvin Araújo Ferreira |

## O que é

Seminário de análise do custo computacional do algoritmo recursivo que resolve a Torre de Hanói. O trabalho demonstra que a função de resolução tem complexidade **O(2ⁿ - 1)**, crescimento exponencial em relação ao número de discos.

## Tecnologias

- C — implementação do algoritmo recursivo
- Análise assintótica — notação Big-O

## Como compilar e rodar

```bash
gcc -o hanoi codigo-c/hanoi.c
./hanoi
```

## Conteúdo

- `codigo-c/` — implementações em C do algoritmo
- `dados-saidas/` — dados coletados das execuções para análise
- `Torre-de-Hanoi-Kelvin.pdf` — apresentação completa com análise de complexidade

## Complexidade

| Discos (n) | Movimentos mínimos (2ⁿ - 1) |
|---|---|
| 1 | 1 |
| 5 | 31 |
| 10 | 1.023 |
| 20 | 1.048.575 |
| 30 | 1.073.741.823 |

## Material complementar

- 📓 [Notion — Seminário Torre de Hanói](https://dillikel.notion.site/dillikel/Semin-rio-Torre-de-Han-i-An-lise-de-Algoritmos-04bda69bc2e34fb590cb28f6946274fb)
