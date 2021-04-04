#include <stdio.h>
#include <math.h>

int main()
{
	int N,i;
	int result=665;
	
	scanf("%d", &N);
	
	while(1)
	{
		if (i==N)
			break;
		result++;
		
		for (int a=0;a<10;a++)
		{
			if (result/(int)pow(10,a)%1000 == 666)
			{
				i++;
				break;
			}
		}
	}
    printf("%d\n", result);
    
    return 0;
}

	
	
	
