#include <stdio.h>
#include <stdlib.h>

main()
{
	float saldo;
	int a;
	
	printf("Benvenuto nel programma di cambio valuta del proprio conto corrente!\n\nInserisci il valore da cambiare (Euro): ");
	scanf("%f", &saldo);
	
	printf("\n\nScegli il tipo di valuta verso cui si vuole cambiare:\n\nPremi 1 se si desidera cambiare la valuta da Euro a Sterline.\n\nPremi 2 se si desidera cambiare la valuta da Euro a Dollari.\n\n");
	scanf("%d", &a);
	
	switch(a)
	{
		case 1:
			printf("\n\nHai scelto di effettuare il cambio della valuta del saldo del tuo conto corrente (%.2f Euro) da Euro a Sterline.", saldo);
			saldo = saldo * 0.92;
			printf("\n\nAdesso il saldo del tuo conto corrente equivale a: %.2f Sterline.", saldo);
			break;
		
		case 2:
			printf("\n\nHai scelto di effettuare il cambio della valuta del saldo del tuo conto corrente (%.2f Euro) da Euro a Dollari.", saldo);
			saldo = saldo * 1.12;
			printf("\n\nAdesso il saldo del tuo conto corrente equivale a: %.2f Dollari.", saldo);
			break;
		
		default:
			printf("\n\nScelta non valida, ti preghiamo di scegliere tra le due opzioni disponibili.");
			break;
	}
	
	system("pause>null");
}
