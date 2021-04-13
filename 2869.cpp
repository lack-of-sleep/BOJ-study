#include <stdio.h>

int main()
{
	int A,B,V;
	scanf("%d %d %d", &A, &B, &V);
	
	int result = ((V-A)/(A-B))+1;
	
	if((V-A)%(A-B)!=0)
		result++;
	
	printf("%d", result);
	
	return 0;
	
}
