#include <stdio.h>

int main()
{
	int N, n;
	
	while(scanf("%d", &N) != EOF){
		if(N!=0){
			int i = 0;
			int Sum = 0;
			while(i < N){
				scanf("%d", &n);
				Sum += n;
				n = 0;
				i++;
			}
			printf("%d\n", Sum);
		}
	}
}
