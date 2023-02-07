#include <stdlib.h>
#include <stdio.h>

int *obtemMaioresMedia (int *vet, int tam, int *novoTam )
{
int i,j,ct=0;
float media=0;
int *novoVet;

//calcula a media
	for (i=0; i<tam;i++)
		media=media+vet[i];
	media=media/tam;	//tam=i

//conta valores acima da media
	for (i=0; i<tam;i++)
		if (vet[i]>media) ct++;
	*novoTam = ct;

//aloca novo vetor
	novoVet = (int *) malloc(ct* sizeof(int));

//preenche com valores acima da media
	for (i=0, j=0; i<tam; i++)
		if (vet[i]>media) {
			novoVet[j]=vet[i];
			j++;
		}
// retorna o vetor com valores acima da media
	return novoVet;
}

void main () {
int tamNovo, i;
int vetor [10] = {2,4,6,8,10,7,9,11,13,14};
int *vetMaioresMedia;

	vetMaioresMedia = obtemMaioresMedia (vetor, 10, &tamNovo);

	for (i=0; i<tamNovo;i++)
		printf("%d-",vetMaioresMedia[i]);
}