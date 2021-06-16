#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float x,r;
	
	printf("Inserisci un valore: ");
	scanf("%f",&x);
	
	r=sqrt(x);
	
	printf("\nLa radice quadrata di '%.0f' e' '%.0f'",x,r);
	
	system("pause>nul");
}
