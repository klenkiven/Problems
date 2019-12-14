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
		/* 这里的策略是找到最小值的下标，然后，将最小值所在位置的值与最大值坐在位置的值交换 */
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
