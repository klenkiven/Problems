#include <stdio.h>

int main()
{
	int n, a, b;
	
	while(scanf("%d", &n) != EOF){
		int i = 0;
		while(i < n){
			scanf("%d%d", &a ,&b);
			printf("%d\n", a+b);
			i += 1;
		}
	}
}
