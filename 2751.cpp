#include <stdio.h>
#include <stdlib.h>

int list[1000000] = {0,};

//�� �Լ�
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
	
	//qsort �Լ� 
	qsort(list,N,sizeof(int),compare); 
	//void qsort (void *base, size_t nel, size_t width, compare ;
	//           (�迭�� ������,�迭 ���Ҽ�,�����ϳ��� ũ��,���Լ� ������) 
	
	for (i=0;i<N;i++)
		printf("%d\n", list[i]);
	
	return 0;
	
}
