#include <stdio.h>

int busca(int vetor[],int e, int tamanho_vet){

		if(tamanho_vet == -1){
			printf("Nao achei nenhum elemento correspondente no vetor. Sorry :( \n");
		}
		else if(vetor[tamanho_vet] == e){
			printf("Aha, achei o elemento no indice -> %d \n", tamanho_vet);
		}
		else {
                busca(vetor,e, tamanho_vet-1);
             }
}
void main(){

	int tamanho_vet, vetor[100],i,e;

	printf("Entre com o tamanho do Vetor: ");
	scanf("%d", &tamanho_vet);

	for(i=0;i<tamanho_vet;i++){
		printf("Entre com o elemento do vetor: ");
		scanf("%d", &vetor[i]);
		}

	printf("Entre com o elemento que deseja buscar no vetor: ");
	scanf("%d", &e);

     busca(vetor,e,tamanho_vet);
}

