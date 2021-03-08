#include <stdio.h>
#include <string.h>

char a[1000000];
char seps[] = " "; //띄어쓰기에 따라 문자를 분리함 
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
