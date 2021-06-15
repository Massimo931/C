#include <stdio.h>
#define MAX 1000

int main()
{
	char s1[MAX], s2[MAX];
	int j,i;
	
	printf("\nPrima stringa: \t");
	scanf("%s",&s1);
	
	printf("\nSeconda stringa: \t");
	scanf("%s",&s2);
	
	for (j=0; s1[j]!='\0'; j++);
	
	for (i=0; s2[i]!='\0' && i+j<MAX; i++)
	
	s1[i+j]=s2[i];
	
	s1[i+j]='\0';
	
	printf("\nStringa concatenata:\t%s\n",s1);
	
	return 0;
}
