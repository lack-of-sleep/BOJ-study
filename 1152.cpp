#include <stdio.h>
#include <string.h>

char a[1000000];
char seps[] = " "; //���⿡ ���� ���ڸ� �и��� 
char *token;


int main(void)
{
    gets(a);
	token = strtok(a, seps);
	
	int i = 0;
	while (token != NULL)
	{
		token = strtok(NULL, seps);
		i++;
	}
	
	printf("%d",i);
	
	return 0;	
}
