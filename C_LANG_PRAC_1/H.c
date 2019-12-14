#include <stdio.h>

int main()
{
	int n, m;
	int M = 1;
	
	while(scanf("%d", &n) != EOF){
		int i = 0;
		M = 1;
		while(i < n){
			scanf("%d", &m);
			if(m%2 != 0)
				M *= m;
			i++;
		}
		printf("%d\n", M);
	}
	
	return 0;
}
