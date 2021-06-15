#include <stdio.h>
#define MAX 1000

void lunghezza();

int main()
{
	lunghezza();
	
	return 0;
}

void lunghezza()
{
	char s[MAX];
	int i = 0;
	
	printf("Inserisci una parola: ");
	scanf("%s", &s);
	
	for (i=0; s[i]!='\0'; i++);
	
	printf("\nIl numero di caratteri e': \t %d\n",i);
}
