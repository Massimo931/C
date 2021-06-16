#include <stdio.h>
#include <stdlib.h>

main()
{
	float cateto1, cateto2, ipotenusa;
	float area, perimetro;
	
	printf("Benvenuto nel programma di calcolo dell'area e del perimetro del triangolo rettangolo!\n\nInserisci il valore del primo cateto (cm): ");
	scanf("%f", &cateto1);
	
	printf("\n\nInserisci il valore del secondo cateto (cm): ");
	scanf("%f", &cateto2);
	
	printf("\n\nInserisci il valore dell'ipotenusa (cm): ");
	scanf("%f", &ipotenusa);
	
	area = (cateto1 * cateto2) / 2;
	perimetro = cateto1 + cateto2 + ipotenusa;
	
	printf("\n\nIl valore dell'area del triangolo rettangolo e': %.3f cm quadrati", area);
	printf("\n\nIl valore del perimetro del triangolo rettangolo e': %.3f cm", perimetro);
}
