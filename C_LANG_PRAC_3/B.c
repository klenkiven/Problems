#include <stdio.h>

int main()
{
	int N, a[100+1], min;
	
	while(scanf("%d", &N) != EOF){
		int i = 0;
		while(i < N){
			scanf("%d", &a[i]);
			i++;
		}
		i = 1;
		/* ����Ĳ������ҵ���Сֵ���±꣬Ȼ�󣬽���Сֵ����λ�õ�ֵ�����ֵ����λ�õ�ֵ���� */
		min = 0;
		while(i < N){
			if(a[i] < a[min])
				min = i;
			i++;
		}
		
		int temp = a[min];
		a[min] = a[0];
		a[0] = temp;
		
		i = 0;
		while(i < N){
			printf("%d", a[i]);
			if(i != N-1)
				printf(" ");
			if(i == N-1)
				printf("\n");
			i++;
		} 
	}
}
