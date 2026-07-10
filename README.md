# Vetor Dinâmico em C

Implementação de um vetor dinâmico em C utilizando alocação dinâmica de memória, crescimento exponencial da capacidade e tratamento seguro de erros de entrada e de alocação.

## Objetivo

Este projeto foi desenvolvido como exercício prático durante meus estudos da linguagem C e de estruturas de dados.

Sua finalidade foi implementar um vetor capaz de crescer dinamicamente conforme novos elementos são inseridos, utilizando `malloc` e `realloc`, além de praticar modularização, ponteiros e tratamento de erros.

## Tecnologias

- Linguagem C
- GCC

## Funcionalidades

- Leitura de números inteiros pelo usuário;
- Encerramento da entrada com o valor `-1`;
- Tratamento de entrada inválida;
- Tratamento de `EOF`;
- Impressão dos elementos armazenados;
- Cálculo da soma dos elementos do vetor;
- Liberação da memória alocada com `free`.

## Conceitos praticados

- Ponteiros
- Ponteiro para ponteiro (`int **`)
- Alocação dinâmica (`malloc`)
- Realocação dinâmica (`realloc`)
- Liberação de memória (`free`)
- Modularização de código
- Tratamento de erros
- Entrada e saída padrão (`scanf` e `getchar`)
- Crescimento exponencial de capacidade
- Complexidade de algoritmos

## Estrutura do programa

O código foi dividido em funções responsáveis por tarefas específicas:

- `ler_inteiro()` - realiza a leitura de um número inteiro;
- `checa_aumento_capacidade()` - dobra a capacidade do vetor quando necessário;
- `imprime_vetor()` - imprime os elementos armazenados;
- `soma_elementos_vetor()` - calcula a soma dos elementos do vetor.

## Complexidade

### Tempo

- Inserção sem realocação: **O(1)**
- Inserção com realocação: **O(1)** ou **O(n)**
- Inserção amortizada: **O(1)**
- Impressão dos elementos: **O(n)**
- Soma dos elementos: **O(n)**
- Leitura da entrada: **O(n)**

### Espaço

- Complexidade espacial: **O(n)**

**Observação**: A análise detalhada das complexidades temporal e espacial encontra-se documentada em um arquivo complementar disponível neste repositório.

## Aprendizados

Durante o desenvolvimento deste projeto foram praticados diversos conceitos importantes da linguagem C, incluindo:

- utilização segura de `realloc`;
- atualização da capacidade apenas após o sucesso da realocação;
- uso de ponteiro para ponteiro para modificar o endereço do vetor dentro de uma função;
- tratamento de entradas inválidas e de `EOF`;
- limpeza do buffer de entrada após erros de leitura;
- separação de responsabilidades em funções;
- análise de complexidade temporal e espacial.

## Autor

Bernardo Guerra
