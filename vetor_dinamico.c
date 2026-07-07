#include <stdio.h>
#include <stdlib.h>

int ler_inteiro(int *numero) {
	int retorno_leitura;
	retorno_leitura = scanf("%d", numero);
	return retorno_leitura;
}

int checa_aumento_capacidade(int **vetor, int *capacidade){
	int capacidade_aumentada = *capacidade * 2;
	int *temp = realloc(*vetor, capacidade_aumentada * sizeof(**vetor));
	if (temp == NULL){
		return 1;		
	}
	*capacidade = capacidade_aumentada;
	*vetor = temp;
	return 0;
}

void imprime_vetor(int *vetor, int posicao){
	if (posicao == 0){
		printf("Vetor vazio\n");
		return;
	}
	int i;
	printf("Numeros: ");
	for (i = 0 ; i < posicao - 1 ; i++){
		printf("%d ", vetor[i]);
	}
	printf("%d\n", vetor[i]);
}

int soma_elementos_vetor(int *vetor, int posicao){
	int soma = 0;
	for (int i = 0 ; i < posicao ; i++){
		soma += vetor[i];
	}
	return soma;
}

int main(void) {
	int numero;
	int capacidade = 1;
	int posicao = 0;
	int *vetor = malloc(capacidade * sizeof(*vetor));
	int resultado_leitura;
	int caractere;

	if (vetor == NULL) {
		return 1;
	}
	do {
		printf("Digite um numero inteiro: ");
		while ((resultado_leitura = ler_inteiro(&numero)) != 1){
			if (resultado_leitura == EOF){
				free(vetor);
				return 1;
			}
			printf("Entrada invalida, tente novamente.\n");
			while ((caractere = getchar()) != '\n' && caractere != EOF);
		}
		if (numero != -1){
			if (posicao == capacidade){
				if (checa_aumento_capacidade(&vetor, &capacidade) == 1){
					free(vetor); 
					return 1;
				}		
			}
			vetor[posicao] = numero;
			posicao++;
		}
	} while (numero != -1);
	imprime_vetor(vetor, posicao);
	printf("Soma: %d\n", soma_elementos_vetor(vetor, posicao));
	free(vetor);
	return 0; 
}