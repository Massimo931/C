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
	int c = 0;
	int i;
	
	printf("Inserisci una parola: ");
	scanf("%s", &s);
	
	for (i=0; s[i] != '\0'; i++)
	{
		if(s[i] == 65 || s[i] == 69 || s[i] == 73 || s[i] == 79 || s[i] == 85 || s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
		{
			c++;
		}
	}
	
	printf("\nIl numero di vocali e': \t %d\n",c);
}
