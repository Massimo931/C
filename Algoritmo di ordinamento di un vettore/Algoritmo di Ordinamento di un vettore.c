#include <stdio.h>

void acquisizione (int vet[], int n); //prototipo procedura che acquisisce il vettore
void visualizza (int vet[], int n); //prototipo procedura che visualizza il vettore originale
void visualizza1 (int vet[], int n); //prototipo procedura che visualizza il vettore in ordine crescente
void visualizza2 (int vet[], int n); //prototipo procedura che visualizza il vettore in ordine decrescente
void selectionsort (int vet[], int n); //prototipo procedura che ordina il vettore in ordine crescente
void selectionsort2 (int vet[], int n); //prototipo procedura che ordina il vettore in ordine decrescente
void scambia (int *a, int *b); //prototipo procedura che scambia il valore di due variabili

int main()   //inizio programma principale   
{
	int n;

	do {
		printf("Inserisci il numero di elementi del vettore: ");
		scanf("%d", &n);
	} while (n < 1);
	
	int vet[n];


	acquisizione(vet,n);       //richiamo procedura acquisizione 
	visualizza (vet,n);        //richiamo procedura visualizza
	selectionsort(vet,n);      //richiamo procedura selectionsort 
	visualizza1 (vet,n);       //richiamo procedura visualizza1
	selectionsort2(vet,n);     //richiamo procedura selectionsort2 
	visualizza2 (vet,n);       //richiamo procedura visualizza2
	
	return 0;
}          //fine programma principale



void acquisizione (int vet[], int n) //inizio procedura acquisizione
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Inserire un valore intero: ");
		scanf("%d", &vet[i]);
	}
}                                       //fine procedura acquisizione

void visualizza(int vet[], int n)      //inizio procedura visualizza
{
	int i;
	printf("\nIl vettore originale e': ");
	
	for (i=0;i<n;i++)
	{
		printf("%d", vet[i]);
		printf(" | ");
	}
}                                     //fine procedura visualizza

void selectionsort(int vet[], int n)  //inizio procedura selectionsort
{
	int i,j;
	
	for(i=0; i < n-1; i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(vet[i]>vet[j])
			{
				scambia(&vet[i], &vet[j]);
			}
		}
	}
}                                  //fine procedura selectionsort

void selectionsort2(int vet[], int n)   //inizio procedura selectionsort2
{
	int i,j;
	
	for(i=0; i<(n-1); i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(vet[i]<vet[j])
			{
				scambia(&vet[i], &vet[j]);
			}
		}
	}
}                                      //fine procedura selectionsort2


void scambia (int *a, int *b)         //inizio procedura scambia
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}                                   //fine procedura scambia

void visualizza1(int vet[], int n)  //inizio procedura visualizza1
{
	int i;
	printf("\nIl vettore in ordine crescente e': ");
	
	for (i=0;i<n;i++)
	{
		printf("%d", vet[i]);
		printf(" | ");
	}
}                                  //fine procedura visualizza1

void visualizza2(int vet[], int n) //inizio procedura visualizza2
{
	int i;
	printf("\nIl vettore in ordine decrescente e': ");
	
	for (i=0;i<n;i++)
	{
		printf("%d", vet[i]);
		printf(" | ");
	}
}                                //inizio procedura visualizza2
