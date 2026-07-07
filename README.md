# Vetor Dinâmico em C

Implementação de um vetor dinâmico em C utilizando alocação dinâmica de memória, crescimento exponencial da capacidade e tratamento seguro de erros de entrada e de alocação.

## Objetivo

Este projeto foi desenvolvido como exercício prático durante meus estudos da linguagem C e de estruturas de dados.

O objetivo foi implementar um vetor capaz de crescer dinamicamente conforme novos elementos são inseridos, utillizando `malloc` e `realloc`, além de praticar modularização, ponteiros e tratamento de erros.

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
- Liberação de memória (`memória`)
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

- Inserção: **O(1) amortizado**
- Inserção com realocação: **O(n)**
- Impressão: **O(n)**
- Soma dos elementos: **O(n)**

Apesar das realocações custarem O(n), o crescimento exponencial faz com que o custo médio de inserção permaneça O(1) amortizado.

### Espaço

O vetor utiliza memória proporcional à quantidade de elementos armazenados.

- Complexidade espacial: **O(n)**

## Aprendizados

Durante o desenvolvimento deste projeto foram praticados diversos conceitos importantes da linguagem C, incluindo:

- utilização segura de `realloc`;
- atualização da capacidade apenas após o sucesso da realocação;
- tratamento de `EOF`;
- limpeza do buffer de entrada após erros de leitura;
- separação de responsabilidades em funções;
- uso de ponteiro para ponteiro para modificar o endereço do vetor dentro de uma função;
- análise de complexidade temporal e espacial;

## Autor

Bernardo Guerra
