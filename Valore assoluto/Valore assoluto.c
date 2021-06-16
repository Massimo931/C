#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int x,r;
	
	printf("Inserisci un valore: ");
	scanf("%d",&x);
	
	r=abs(x);
	
	printf("\nIl valore assoluto di '%d' e' '%d'",x,r);
	
	system("pause>nul");
}
