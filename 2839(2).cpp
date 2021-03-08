#include <stdio.h>

int main(void)
{
	int N;
	
	scanf("%d",&N);
	
	int count = N/5;
	
	if(N%5 != 0)
	{
		for(;count>=0;count--)
		{
			if((N-5*count)%3 == 0)
			{
				count+=(N-5*count)/3;
				break;
			}
		}
	}

	printf("%d",count);
	return 0;
	
}


