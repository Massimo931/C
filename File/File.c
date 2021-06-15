#include <stdio.h>

main()
{
	char myfile[50];
	int scelta;
	char mod;
	char dato[100];
	char letto[100];
	FILE *fp;
	
	printf("Inserisci il nome del file da creare: ");
	scanf("%s", &myfile);
	
	do{
		printf("Scegli la modalita' di gestione del file:\n1\t(r) --> Lettura\n2\t(w) --> scrittura\n3\t(a) --> scrittura, aggiunta a fondo\n0\tEsci\nScelta: ");
		scanf("%d", &scelta);
		
		switch(scelta)
		{
			case 1:
				//mod = "r";
				
				fp = fopen(myfile, "r");
				
				if((fp = fopen(myfile, "r")) == NULL)
				{
					printf("Errore nell'apertura del file\n");
				}
		
				else
				{
					fscanf(fp, "%s", &letto);
					
					printf(letto);
					printf("\n");
				}
				
				fclose(fp);
				
				break;
				
			case 2:
				//mod = "w";
				
				fp = fopen(myfile, "w");
				
				printf("Testo da sovrascrivere: ");
				scanf("%s", &dato);
				
				if((fp = fopen(myfile, "w")) == NULL)
				{
					printf("Errore nell'apertura del file\n");
				}
		
				else
				{
					fprintf(fp, "%s", &dato);
				}
				
				fclose(fp);
				
				break;
				
			case 3:
				//mod = "a";
				
				fp = fopen(myfile, "a");
				
				printf("Testo da aggiungere: ");
				scanf("%s", &dato);
				
				if((fp = fopen(myfile, "a")) == NULL)
				{
					printf("Errore nell'apertura del file\n");
				}
		
				else
				{
					fprintf(fp, "%s", &dato);
				}
				
				fclose(fp);
				
				break;
		}
		
		system("pause");
		
		system("cls");
	}while(scelta != 0);
}
