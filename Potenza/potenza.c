#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int x,y;
	
	printf("Inserisci un valore: ");
	scanf("%d",&x);
	printf("\nInserisci la potenza; ");
	scanf("%d",&y);
	
	
	y = pow(x,y);
	printf("La poteza di '%d' e' '%d'",x ,y);
	
	system("pause>nul");
	return 0;
}
