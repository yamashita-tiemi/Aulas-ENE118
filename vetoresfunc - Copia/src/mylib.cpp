#include "mylib.h"


int crescente(int vet[], int tamVet)
{
	int vetor[tamVet];
	int j = 0;

	for (int i = 0; i < tamVet ;i++)
	{
		if(vet[i] <= vet[i+1]){
			vetor[j] = vet[i];
			j++;
		}
	}

	return vetor[tamVet];
}