#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n, S;
	while(scanf("%d%d", &m, &n) != EOF){
		int j, k;
		int x=1, y=1, s=0;
		for(j = 1; j <= m; j++){
			for(k = 1; k <= n; k++){
				scanf("%d", &S);
				if(abs(s) < abs(S)){
					x = k;
					y = j;
					s = S;
				}
			}
		}
		printf("%d %d %d\n", y, x, s);
	}
}
