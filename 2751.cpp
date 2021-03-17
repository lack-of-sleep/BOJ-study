#include <stdio.h>
#include <stdlib.h>

int list[1000000] = {0,};

//비교 함수
//int compare(const void *, const void *)
int compare(const void *first, const void *second)
{
	if (*(int*)first>*(int*)second)
		return 1;
	else if (*(int*)first<*(int*)second)
		return -1;
	else
		return 0;
	
}

int main()
{
	
	int N,i;
	
	scanf("%d", &N);
	
	for (i=0;i<N;i++)
		scanf("%d", &list[i]);
	
	//qsort 함수 
	qsort(list,N,sizeof(int),compare); 
	//void qsort (void *base, size_t nel, size_t width, compare ;
	//           (배열의 포인터,배열 원소수,원소하나의 크기,비교함수 포인터) 
	
	for (i=0;i<N;i++)
		printf("%d\n", list[i]);
	
	return 0;
	
}
